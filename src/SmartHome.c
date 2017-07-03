#include "SmartHome.h"
#include <math.h>
#include "GPScoordinate"


GPScoordinate house         = { 200 , 5345 }; 
GPScoordinate outsideGarage = { 200 , 5300 };
GPScoordinate garage        = { 215 , 5300 };
GPScoordinate kitchen       = { 196 , 5400 };
  
float findHypotenuse (GPScoordinate gps){
  return sqrt(gps.x*gps.x + gps.y*gps.y);
}  

void doSmartThing(){
  if (findHypotenuse(house) < 2000){
    turn(AIRCOND, ON);
    turn(WATER_HEATER, ON);
  }
  else if (findHypotenuse(outsideGarage) < 5){
    turn(GARAGE_DOOR, ON);
  }
  else if (findHypotenuse(Garage) > 1){
    turn(GARAGE_DOOR, OFF);
  }
  else if (findHypotenuse(kitchen) == findHypotenuse(gps)){
    turn(KITCHEN_LIGHT, ON);
  }
  
}

