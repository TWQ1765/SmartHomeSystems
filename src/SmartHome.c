#include <stdio.h>
#include <math.h>
#include <string.h>
#include "SmartHome.h"
#include "getgpscoordinate.h"

//______struct____________      _x_   _y__
GPScoordinate house         = { 200 , 5345 };
GPScoordinate outsideGarage = { 200 , 5300 };
GPScoordinate garage        = { 215 , 5300 };
GPScoordinate kitchen       = { 196 , 5400 };
//function for square
float square (float a){
  return a*a;
}
  
float findhouselocation(GPScoordinate gps,GPScoordinate *house )
{
	//GPScoordinate house;
  float rangehouse;
  rangehouse = sqrt(square(gps.x-house->x)+square(gps.y-house->y));
  return rangehouse;
} 
float findoutsideGaragelocation(GPScoordinate gps,GPScoordinate outsideGarage )
{
  float rangeoutsideGarage;	
  rangeoutsideGarage = sqrt(square(gps.x-outsideGarage.x)+square(gps.y-outsideGarage.y));
  return rangeoutsideGarage;
} 
float findgaragelocation(GPScoordinate gps,GPScoordinate garage  )
{
  float rangegarage;	
  rangegarage = sqrt(square(gps.x-garage .x)+square(gps.y-garage .y));
  return rangegarage;
} 
float findkitchenlocation(GPScoordinate gps,GPScoordinate kitchen )
{
  float rangekitchen;	
  rangekitchen = sqrt(square(gps.x-kitchen.x)+square(gps.y-kitchen.y));
  return rangekitchen;
} 
//
void doSmartThing(){
	
	GPScoordinate gps;
	gps = getGPScoordinate();
	//float a= &rangehouse; 
	// findkitchenlocation();
	//findgaragelocation();
	//findoutsideGaragelocation();
	//findhouselocation();
	GPScoordinate a;
	GPScoordinate b;
	GPScoordinate c = outsideGarage;
	GPScoordinate d = garage;
	GPScoordinate e = kitchen;
	a= gps;
	b = house;
  ///*
  if (findkitchenlocation(a,e) <= 2)
  {
    turn(KITCHEN_LIGHT, ON);
  }
  else if (findgaragelocation(a,d) <= 1)
  {
    turn(GARAGE_DOOR, OFF);
  }
  else if (findoutsideGaragelocation(a,c) <= 5)
  {
    turn(GARAGE_DOOR, ON);
  }
  else if (findhouselocation(a,&b) <= 2000)
  {
    turn(AIRCOND, ON);
    turn(WATER_HEATER, ON);
  }
  else
  {
    turn(GARAGE_DOOR, OFF);
    turn(KITCHEN_LIGHT, OFF);
    turn(AIRCOND, OFF);
    turn(WATER_HEATER, OFF);
  }
  //*/
}




