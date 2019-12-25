#include "vex.h"

void setIntake(int target){
   IntakeRight.spin(forward,target,rpm);
   IntakeRight.spin(forward,target,rpm);
}
void intake(){
     if (Controller1.ButtonL1.pressing())  {
      IntakeRight.spin(forward);
      IntakeRight.spin(forward);
    } 
    else if (Controller1.ButtonL2.pressing()) {
      IntakeRight.spin(reverse);
      IntakeRight.spin(reverse);
    if(Controller1.ButtonL2.pressing()&& Arm.position(degrees)>100){
      setIntake(-40);
    }
    } else {
      IntakeLeft.setBrake(hold);
      IntakeRight.setBrake(hold);
    }
}