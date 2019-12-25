#include "vex.h"
void setGearbox(int target){
  Gearbox.spin(forward ,target, rpm);
}
void gearbox(){
  if (Controller1.ButtonDown.pressing()) {
      Gearbox.spin(forward);
    } else if (Controller1.ButtonUp.pressing()) {
      Gearbox.spin(reverse);
    } else {
      Gearbox.setStopping(hold); 
      Gearbox.stop();
    }
}
void gearboxAndarm(){
  if (Controller1.ButtonR1.pressing()&&Gearbox.position(degrees)<200) {
      Gearbox.spin(forward);
    } else if (Controller1.ButtonR2.pressing()&&Gearbox.position(degrees)>0) {
      Gearbox.spin(reverse);
    } else {
      Gearbox.setStopping(hold); 
      Gearbox.stop();
    }
}
void GearboxMacroUp(){
 // Gearbox.resetPosition();
  Gearbox.setBrake(coast);
  while(Gearbox.position(degrees)<1000){
    if(Gearbox.position(degrees)<900){setGearbox(100);}
    if(Gearbox.position(degrees)<100){setGearbox(50);}
  }
}
void GearboxMacroDown(){
  Gearbox.setBrake(coast);
  while(Gearbox.position(degrees)>0){
setGearbox(-100);
  }
}