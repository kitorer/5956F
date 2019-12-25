#include "vex.h"


void arm(){
    if (Controller1.ButtonR1.pressing()) {
      Arm.spin(reverse);
    } else if (Controller1.ButtonR2.pressing()) {
      Arm.spin(forward);
    } else {
      Arm.setStopping(hold); 
      Arm.stop();
    }
}

void armMacro(){
  Arm.resetRotation();
  int count =0;
    if(Controller1.ButtonX.pressing()){
          count++;
          count= count % 3; 
    }
    if(count==0){
    Arm.rotateTo(0, degrees);
    }
    if(count==1){
    Arm.rotateTo(250, degrees);
    }
    if(count==2){
    Arm.rotateTo(400, degrees);
    }
    Arm.setBrake(hold);
}