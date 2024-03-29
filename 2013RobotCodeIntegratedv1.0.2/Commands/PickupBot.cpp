#include "PickupBot.h"

PickupBot::PickupBot() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(climber);
}

// Called just before this Command runs the first time
void PickupBot::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void PickupBot::Execute() {
	climber->Pickup();
}

// Make this return true when this Command no longer needs to run execute()
bool PickupBot::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PickupBot::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PickupBot::Interrupted() {
	climber->Stop();
}
