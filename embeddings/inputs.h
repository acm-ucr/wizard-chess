#ifndef INPUTS_H
#define INPUTS_H

class inputs
{
    public:
        inputs() : x1(0), y1(0), x2(0), y2(0) {}
        // Use these functions to get values to feed into the chess game.
        int getX1() {return x1;}
        int getY1() {return y1;}
        int getX2() {return x2;}
        int getY2() {return y2;}

        // Use these functions to store user input into the inputs class.
        void setX1(int newX1) {x1 = newX1;}
        void setY1(int newY1) {y1 = newY1;}
        void setX2(int newX2) {x2 = newX2;}
        void setY2(int newY2) {y2 = newY2;}

        // Resets the values of the inputs object.
        void reset() {x1 = 0; y1 = 0; x2 = 0; y2 = 0;}
    private:
        int x1, y1, x2, y2;
};

#endif // INPUTS_H
