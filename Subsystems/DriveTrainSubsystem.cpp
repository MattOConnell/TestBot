#include "DriveTrainSubsystem.h"
#include "../Robotmap.h"

DriveTrainSubsystem::DriveTrainSubsystem() : Subsystem("DriveTrainSubsystem") {

}

void DriveTrainSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrainSubsystem::Drive(float left, float right)
{
    this->left.Set(left)*-1;
    this->right.Set(right);
}
