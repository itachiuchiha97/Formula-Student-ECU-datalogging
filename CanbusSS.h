#ifndef canbus__h
#define canbus__h

#define CANSPEED_125 	7		// CAN speed at 125 kbps
#define CANSPEED_250  	3		// CAN speed at 250 kbps
#define CANSPEED_500	1		// CAN speed at 500 kbps

#define MONITOR_STATUS 0x01
#define FUEL_STATUS 0x03
#define CALC_ENGINE_LOAD 0x04
#define COOLANT 0x05
#define SHORT_BANK1 0x06
#define MAP 0x0B
#define RPM 0x0C
#define IGNITION_TIMING_ADV 0x0E
#define AIR_TEMP 0x0F
#define THROTTLE_ABS 0x11
#define AIR_STATUS_SEC 0x12
#define OXYGEN_SENSOR_LOC 0x13
#define OXYGEN_BANK_1 0x14
#define OBD_REQ 0x1C
#define EVAP_PURGE 0x2E
#define BAR_PRESSURE 0x33
#define CTR_VOLTAGE 0x42
#define THROTTLE_REL 0x45
#define ENGINE_MIL_ACT 0x4D
#define FUEL_TYPE 0x51
#define FUEL_INJ_TIME 0x5D
#define VOLTAGE 0xF4
#define POWER 0xF5
#define TORQUE 0xF6
#define BOOST_PRESSURE 0xF7

#define PID_REQUEST 0x7DF
#define PID_REPLY 0x7E8

class CanbusClass //Class declaration1
{
public:

  CanbusClass();
  char init(unsigned char);
  char message_tx(void);
  char message_rx(unsigned char *buffer);
  char ecu_req(unsigned char pid, char *buffer);

private:

};

extern CanbusClass Canbus;

#endif
