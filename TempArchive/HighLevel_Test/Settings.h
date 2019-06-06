#pragma once
#include <Common.h>
#include <due_can.h>
#include <Can_Protocol.h>
using namespace elcano;

#define DEBUG true  //general debugging entering methods, passing tests etc
#define DEBUG_C4 false //for C4 debugging
#define DEBUG2 true //CAN BUS debugging, checking sent and receieved data to/from CANBUS
#define DEBUG3 true //Navigation and Pilot debuggging, which direction told to travel

#define CONES 6 //number of mission points. Update this for each use in new area
#define MAX_WAYPOINTS 50 //change if you map with more than 50 points

//origin is set to the UWB map
#define ORIGIN_LAT 47.758949 
#define ORIGIN_LONG -122.190746

//origin set to center of UWB soccer field
//#define ORIGIN_LAT 47.760850 
//#define ORIGIN_LONG -122.190044


#define MAX_CAN_FRAME_DATA_LEN_16 16
#define TURN_RADIUS_MM 1000
#define MIN_TURNING_RADIUS_MM 1000

#define TURN_SPEED 1050
#define DESIRED_SPEED_mmPs 1600
 

#define TURN_SPEED 1050
#define DESIRED_SPEED_mmPs 1600

const long turn_speed = 835;