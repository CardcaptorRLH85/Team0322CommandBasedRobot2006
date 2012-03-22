#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	static const int NUMAXIS = 5;
	static const int NUMBUTTONS = 10;
	
	Joystick *driveStick, *manipulatorStick;
public:
	OI();
	Joystick* getDriveStick();
	Joystick* getManipulatorStick();
};

#endif
