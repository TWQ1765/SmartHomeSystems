#ifndef _GETGPSCOORDINATE_H
#define _GETGPSCOORDINATE_H

//float location(float x, float y);

typedef struct GPScoordinate GPScoordinate;
struct GPScoordinate {
  float x;
  float y;
};


typedef enum {
  GARAGE_DOOR,
  KITCHEN_LIGHT,
  AIRCOND,
  WATER_HEATER,
} Device;

typedef enum {
  OFF,
  ON
} State;

void turn(Device device, State state);
void getGPScoordinate(GPScoordinate *gps);




#endif // _GETGPSCOORDINATE_H
