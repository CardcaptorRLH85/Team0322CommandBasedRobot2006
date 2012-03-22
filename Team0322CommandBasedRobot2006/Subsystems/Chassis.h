#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class Chassis: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	RobotDrive *robotDrive;
	Victor *frontLeftMotor, *frontRightMotor;
	Victor *rearLeftMotor, *rearRightMotor;
public:
	Chassis();
	void InitDefaultCommand();
	void driveWithJoystick(Joystick *stick);
};

#endif
