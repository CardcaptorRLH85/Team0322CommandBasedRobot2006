#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/DriveWithJoystick.h"

Chassis::Chassis() : Subsystem("Chassis") {
	
	frontLeftMotor = new Victor(DIGITAL_MODULE_LEFT,1);
	rearLeftMotor = new Victor(DIGITAL_MODULE_LEFT,2);
	frontRightMotor = new Victor(DIGITAL_MODULE_RIGHT,1);
	rearRightMotor = new Victor(DIGITAL_MODULE_RIGHT,2);
	robotDrive = new RobotDrive(frontLeftMotor, rearLeftMotor, frontRightMotor, rearRightMotor);
	robotDrive->SetInvertedMotor(robotDrive->kFrontLeftMotor, true);
	robotDrive->SetInvertedMotor(robotDrive->kFrontRightMotor, true);
	robotDrive->SetInvertedMotor(robotDrive->kRearLeftMotor, true);
	robotDrive->SetInvertedMotor(robotDrive->kRearRightMotor, true);
	robotDrive->SetSafetyEnabled(false);
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveWithJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Chassis::driveWithJoystick(Joystick *stick) {
	robotDrive->TankDrive(stick, 2, stick, 4);
}
