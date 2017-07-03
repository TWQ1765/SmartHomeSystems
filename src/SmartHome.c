#include "SmartHome.h"
#include <math.h>
#include "getgpscoordinate.h"


GPScoordinate house         = { 200 , 5345 }; 
GPScoordinate outsideGarage = { 200 , 5300 };
GPScoordinate garage        = { 215 , 5300 };
GPScoordinate kitchen       = { 196 , 5400 };
  
float findHypotenuse (GPScoordinate coor, GPScoordinate now ){
  return sqrt(square(now.x-coor.x)+square(now.y-coor.y))
}  

void doSmartThing(){
  
  GPScoordinate gps = getGPSCoordinate();
  
  if (findHypotenuse(gps) < 2000){
    turn(AIRCOND, ON);
    turn(WATER_HEATER, ON);
  }
  else if (findHypotenuse(outsideGarage) < 5){
    turn(GARAGE_DOOR, ON);
  }
  else if (findHypotenuse(garage) > 1){
    turn(GARAGE_DOOR, OFF);
  }
  else if (findHypotenuse(kitchen) == findHypotenuse(gps)){
    turn(KITCHEN_LIGHT, ON);
  }
  else{
    turn(GARAGE_DOOR, OFF);
    turn(KITCHEN_LIGHT, OFF);
    turn(AIRCOND, OFF);
    turn(WATER_HEATER, OFF);
  }
}

float square (float a){
  return a*a;
}


