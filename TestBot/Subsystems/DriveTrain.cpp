#include "DriveTrain.h"
#include "../Robotmap.h"
#include "../Commands/DriveTrainCommand.h"


DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	LeftDriveVictor = new Victor(1);
	RightDriveVictor = new Victor(2);
	//FirstEncoder = new Encoder(3);
	//SecondEncoder = new Encoder(4);
}
    
void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveTrainCommand());
}
	void DriveTrain::LDrive(float speed){
		LeftDriveVictor->Set(-speed);
		//double encoder1Value = FirstEncoder->Get();
		//printf("%lf", encoder1Value);
	}
	void DriveTrain::RDrive(float speed){
		RightDriveVictor->Set(speed);
		//double encoder2Value = SecondEncoder->Get();
		//printf("%lf", encoder2Value);
	}


// Put methods for controlling this subsystem
// here. Call these from Commands.
