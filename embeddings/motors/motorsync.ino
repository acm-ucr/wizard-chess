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
  step(motorY, num_steps, 10);
}

void horizontal_mvmt(int num_steps, bool direction) {
  // might need to change motor direction depedning on setup
  digitalWrite(motorX1, direction);
  digitalWrite(motorX2, !direction);
  for(int i = 0; i < num_steps; i++) {
    step(motorX1, 1, 10);
    step(motorX2, 1, 10);
  }
}

void diagonal_mvmt(int num_Xsteps, int num_Ysteps, bool x_direction, bool y_direction) {
  int half_box_steps = 50; // will need to change once we know actual dimensions of board
  digitalWrite(motorX1, x_direction);
  digitalWrite(motorX2, x_direction);
  digitalWrite(motorY, y_direction);

  horizontal_mvmt(half_box_steps, x_direction);
  vertical_mvmt(num_Ysteps, y_direction);
  horizontal_mvmt(num_Xsteps - half_box_steps, x_direction);
}

// TO-DO: need to implement castle move 

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

  // Serial.print("Piece moved from ");
  // Serial.print(start_x_pos);
  // Serial.print(",");
  // Serial.print(start_y_pos);
  // Serial.print(" to ");
  // Serial.print(end_x_pos);
  // Serial.print(",");
  // Serial.println(end_y_pos);
}

void setup(){
	pinMode(motorX1, OUTPUT);
	pinMode(motorX2, OUTPUT);
	pinMode(motorY, OUTPUT);

	pinMode(motorX1Dir, OUTPUT);
	pinMode(motorX2Dir, OUTPUT);
	pinMode(motorYDir, OUTPUT);
	
	//Enables the motors
	digitalWrite(8, LOW);

  Serial.begin(9600);
  while(!Serial) {
    ;
  }
}

int curr_x_pos = 50;
int curr_y_pos = 50;

void loop(){
  // currently assuming 800 x 800 tick board
  // each square is 100 x 100
  // input format: "x1 y1 x2 y2\n"

  String input_coords;

  int start_x_pos;
  int start_y_pos;
  int end_x_pos;
  int end_y_pos;
  
  int space1;
  int space2;
  int space3;


  if (Serial.available() > 0) {
    input_coords = Serial.readStringUntil('\n');

    space1 = input_coords.indexOf(' ');
    space2 = input_coords.indexOf(' ', space1 + 1);
    space3 = input_coords.indexOf(' ', space2 + 1);

    start_x_pos = input_coords.substring(0, space1).toInt();
    start_y_pos = input_coords.substring(space1 + 1, space2).toInt();
    end_x_pos = input_coords.substring(space2 + 1, space3).toInt();
    end_y_pos = input_coords.substring(space3 + 1).toInt();

    // move to magnet to start position, magnet off
    move_piece(curr_x_pos, curr_y_pos, start_x_pos, start_y_pos);

    // move chess piece, magnet on
    move_piece(start_x_pos, start_y_pos, end_x_pos, end_y_pos);
    
    // update current position 
    curr_x_pos = end_x_pos;
    curr_y_pos = end_y_pos;

    //Serial.println("Movement done");
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