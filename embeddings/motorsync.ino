#include <ezButton.h>

//Used to send the number of steps
#define motorX1 2
#define motorX2 3
#define motorY 4

//Used to determine the directions of the motors (clockwise or counterclockwise)
#define motorX1Dir 5
#define motorX2Dir 6
#define motorYDir 7

//Turned to HIGH by default. Recommend attaching a 2 pin jumper cap between EN and GND on the CNC Shield.
#define enableMotors 8 

// define limit switches
// #define limitSwitch1 9  // motorX1
// #define limitSwitch2 10 // motorX2
// #define limitSwitch3 11 // motorY

ezButton limitSwitch1(9);  // create ezButton object that attach to pin 7;
ezButton limitSwitch2(10);
ezButton limitSwitch3(11);

//motorStep = Step Pin on Driver
//steps = Amount of Steps to Travel (200 Steps = 1 Rotation given 1.8 Degree Step Angle and Full Steps Enabled)
//delayTime = Speed of motor (Increase to move motor slower or decrease to move motor faster)

void step(int motorStep, int steps, int delayTime){
	for(int i = 0; i < steps; i++){
		digitalWrite(motorStep, HIGH);
		delay(delayTime);
		digitalWrite(motorStep, LOW);
		delay(delayTime);
	}
}

void vertical_mvmt(int num_steps, bool direction) {
  digitalWrite(motorY, direction);
      
  for(int i = 0; i < num_steps; i++) {
    limitSwitch3.loop();
    if (limitSwitch3.isPressed()) {
      Serial.println("switch pressed");
      break;
    }  
    Serial.println("switch not pressed");
    step(motorY, 1, 1);
  }
}

void horizontal_mvmt(int num_steps, bool direction) {
  // might need to change motor direction depending on setup
  digitalWrite(motorX1, direction);
  digitalWrite(motorX2, !direction);
  for(int i = 0; i < num_steps; i++) {
    limitSwitch1.loop();
    limitSwitch2.loop();
    if (limitSwitch1.isPressed()) {
      Serial.println("switch pressed");
      break;
    }
    else {
      Serial.println("switch not pressed");
      step(motorX1, 1, 1);
    }
    if (limitSwitch2.isPressed()) {
      Serial.println("switch pressed");
      break;
    }
    else {
      Serial.println("switch not pressed");
      step(motorX2, 1, 1);
      
    }
  }
}


void diagonal_mvmt(int num_Xsteps, int num_Ysteps, bool x_direction, bool y_direction) {
  int half_box_steps = 50; // will need to change once we know actual dimensions of board
  digitalWrite(motorX1, x_direction);
  digitalWrite(motorX2, x_direction);
  digitalWrite(motorY, y_direction);

  horizontal_mvmt(half_box_steps, x_direction);
  vertical_mvmt(num_Ysteps - half_box_steps, y_direction);
  horizontal_mvmt(num_Xsteps - half_box_steps, x_direction);
  vertical_mvmt(half_box_steps, y_direction);
}

// TO-DO: need to implement castle move and captured piece mvmt

int calc_num_steps(int start_pos, int end_pos) {
  return abs(end_pos - start_pos);
}

int calc_direction(int start_pos, int end_pos) {
  if (end_pos > start_pos) {
    return 1;
  } 
  else if (end_pos < start_pos) {
    return 0;
  }
  else {
    return -1;
  }
}

void move_piece(int start_x_pos, int start_y_pos, int end_x_pos, int end_y_pos) {
  int x_steps = calc_num_steps(start_x_pos, end_x_pos);
  int y_steps = calc_num_steps(start_y_pos, end_y_pos);
  int x_dir = calc_direction(start_x_pos, end_x_pos);
  int y_dir = calc_direction(start_y_pos, end_y_pos);

  if (x_steps == 0 && y_steps == 0) {
    ;
  }
  else if (x_steps == 0) {
    vertical_mvmt(y_steps, y_dir);
  }
  else if (y_steps == 0) {
    horizontal_mvmt(x_steps, x_dir);
  }
  else if (x_steps > 0 && y_steps > 0) {
    diagonal_mvmt(x_steps, y_steps, x_dir, y_dir);
  }

  Serial.print("Piece moved from ");
  Serial.print(start_x_pos);
  Serial.print(",");
  Serial.print(start_y_pos);
  Serial.print(" to ");
  Serial.print(end_x_pos);
  Serial.print(",");
  Serial.println(end_y_pos);
}

void setup(){
	pinMode(motorX1, OUTPUT);
	pinMode(motorX2, OUTPUT);
	pinMode(motorY, OUTPUT);

	pinMode(motorX1Dir, OUTPUT);
	pinMode(motorX2Dir, OUTPUT);
	pinMode(motorYDir, OUTPUT);

  //Enables the motors
	digitalWrite(enableMotors, LOW);

  limitSwitch1.setDebounceTime(50); // set debounce time to 50 milliseconds
  limitSwitch2.setDebounceTime(50);
  limitSwitch3.setDebounceTime(50);

  // pinMode(limitSwitch1, INPUT);
  // pinMode(limitSwitch2, INPUT);
  // pinMode(limitSwitch3, INPUT);
	
  Serial.begin(9600);
  while(!Serial) {
    ;
  }
}

int curr_x_pos = 0;
int curr_y_pos = 0;

void loop(){
  // currently assuming 800 x 800 tick board
  // each square is 100 x 100
  // input format: "x1 y1 x2 y2\n"

  // limitSwitch1.loop(); // MUST call the loop() function first
  // limitSwitch2.loop();
  // limitSwitch3.loop();

  String input_coords;

  int start_x_pos;
  int start_y_pos;
  int end_x_pos;
  int end_y_pos;
  
  int space1;
  int space2;
  int space3;

  int captured_x = 400;
  int captured_y = 0;


  if (Serial.available() > 0) {
    input_coords = Serial.readStringUntil('\n');

    space1 = input_coords.indexOf(' ');
    space2 = input_coords.indexOf(' ', space1 + 1);
    space3 = input_coords.indexOf(' ', space2 + 1);
    space4 = input_coords.indexOf(' ', space3 + 1);

    start_x_pos = input_coords.substring(0, space1).toInt();
    start_y_pos = input_coords.substring(space1 + 1, space2).toInt();
    end_x_pos = input_coords.substring(space2 + 1, space3).toInt();
    end_y_pos = input_coords.substring(space3 + 1, space4).toInt();
    move_type = input_coords.substring(space4 + 1).toInt();

    if (move_type == 1) {
      move_piece(end_x_pos, end_y_pos, captured_x, captured_y)
    }
    else if (move_type == 2) {

    }
    else if (move_type == 3) {
      
    }
    // move to magnet to start position, magnet off
    move_piece(curr_x_pos, curr_y_pos, start_x_pos, start_y_pos);

    // move chess piece, magnet on
    move_piece(start_x_pos, start_y_pos, end_x_pos, end_y_pos);
    
    // update current position 
    curr_x_pos = end_x_pos;
    curr_y_pos = end_y_pos;

    Serial.println("Movement done");
  }



  ///// TESTING MVMT FUNCTIONS ///// 

  // given start x and y ticks and end x and y ticks
  // need 2 functions to detemine x and y distance and direction

  // move from A1 to A4: 300 steps, + dir
  // vertical_mvmt(300, 1);
  // delay(500);

  // //move from A4 to F4: 500 steps, + dir
  // horizontal_mvmt(500, 1);
  // delay(500);

  // //move from F4 to C7: 300 steps -x dir, 300 steps +y dir, 
  // diagonal_mvmt(300, 0, 300, 1);
  // delay(500);



  ///// TESTING MOTOR CONNECTION //////

	//Moves the motors in a CLOCKWISE direction
	// digitalWrite(motorX1Dir, HIGH);
	// digitalWrite(motorX2Dir, HIGH);
	// digitalWrite(motorYDir, HIGH);

	// step(motorX1, 200, 10);
	// step(motorX2, 200, 10);
	// step(motorY, 200, 10);

	// digitalWrite(motorX1Dir, LOW);
	// digitalWrite(motorX2Dir, LOW);
	// digitalWrite(motorYDir, LOW);

	// step(motorX1, 200, 10);
	// step(motorX2, 200, 10);
	// step(motorY, 200, 10);
}