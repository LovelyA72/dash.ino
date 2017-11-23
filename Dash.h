#ifndef _Dash_h
#define _Dash_h

class Dash
{
  public:
    void colorPin(int redPin, int greenPin, int bluePin);
    void setColor(int red, int green, int blue);
    void setLED();

    int redPin = 9;
    int greenPin = 6;
    int bluePin = 5;

    private:
      int pushCount = 0; 
};


#endif
