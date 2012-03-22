#include "OI.h"

OI::OI() {
	// Process operator interface input here.
	
	// Create the two Joystick objects
	driveStick = new Joystick(1, NUMAXIS, NUMBUTTONS);
	manipulatorStick = new Joystick(2, NUMAXIS, NUMBUTTONS);
}

Joystick* OI::getDriveStick() {
	return driveStick;
}

Joystick* OI::getManipulatorStick() {
	return manipulatorStick;
}
