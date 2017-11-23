#include "Dash.h"
#include "Arduino.h"

//initialize io pins
int redPin = 9;
int greenPin = 6;
int bluePin = 5;

void Dash::colorPin(int redP, int greenP, int blueP){
  redPin = redP;
  greenPin = greenP;
  bluePin = blueP;
}

void Dash::setColor(int red, int green, int blue) //AdaFruit I LOVE YOU!
{
#ifdef COMMON_ANODE
  red = 255 - red;
  green = 255 - green;
  blue = 255 - blue;
#endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void Dash::setLED(){
    pushCount = pushCount +1;
    switch (pushCount) {
    /*
      Lovelive μ's charactor color list:
      #FFB11B Honoka Kousaka
      #00FFFF Eli Ayase
      #FFFFFF Kotori Minami
      #0000FF Umi Sonoda
      #FFFF00 Rin Hoshizora
      #FF0000 Maki Nishikino
      #800080 Nozomi Tojo
      #ADFF2F Hanayo Koizumi
      #FFC0CB Nico Yazawa
    */
    case 1: //Honoka Kousaka 's orange (adjust needed)
      setColor(0, 78, 228);
      delay(50);
      Serial.print("1 guoguo\n");
      break;
    case 2:
      setColor(255, 0, 0);
      delay(50);
            Serial.print("2 huili\n");
      break;
    case 3:
      setColor(0, 0, 0);
      delay(50);
      Serial.print("3 nanxiaoniao\n");
      break;
    case 4:
      setColor(255, 255, 0);
      delay(50);
      Serial.print("4 hai\n");
      break;
    case 5:
      setColor(0, 0, 255);
      delay(50);
      Serial.print("5 lingmiao\n");
      break;
    case 6:
      setColor(0, 255, 255);
      delay(50);
      Serial.print("6 zhenji\n");
      break;
    case 7:
      setColor(127, 255, 127);
      delay(50);
      Serial.print("7 dongtiaoxi\n");
      break;
    case 8:
      setColor(85, 0, 208);
      delay(50);
      Serial.print("8 xiaoquanhuayang\n");
      break;
    case 9:
      setColor(0, 63, 52);
      delay(50);
      Serial.print("9 niconiconi\n");
      break;
    case 10:
    setColor(0, 78, 228);
      Serial.print("counter reset\n");
      pushCount = 1;
      break;
    default:
      break;
  }
}
