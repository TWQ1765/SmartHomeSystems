#ifndef _SMARTHOME_H
#define _SMARTHOME_H
#include "getgpscoordinate.h"


 
float findhouselocation(GPScoordinate gps,GPScoordinate *house);
float findoutsideGaragelocation(GPScoordinate gps,GPScoordinate outsideGarage);
float findgaragelocation(GPScoordinate gps,GPScoordinate garage);
float findkitchenlocation(GPScoordinate gps,GPScoordinate kitchen);
void  doSmartThing();
float square(float a);
//void getGPScoordinate(GPScoordinate *gps);


#endif // _SMARTHOME_H
