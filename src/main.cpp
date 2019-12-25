#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// LeftBack             motor         3               
// RightBack            motor         5               
// LeftFront            motor         4               
// RightFront           motor         6               
// IntakeLeft           motor         7               
// IntakeRight          motor         10              
// Gearbox              motor         14              
// Arm                  motor         9               
// ---- END VEXCODE CONFIGURED DEVICES ----
using namespace vex;
competition Competition;
void pre_auton(void) {
  vexcodeInit();
}
void autonomous(void) {
}
void usercontrol(void) {
  while (1) {
 tankDrive();
 intake();
 gearbox();
 GearboxMacroDown();
 GearboxMacroUp();
    wait(20, msec);
  }
}
int main() {
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);
  IntakeLeft.setVelocity(100, percent);
  IntakeRight.setVelocity(100, percent);
  Arm.setVelocity(100, percent);
  Gearbox.setVelocity(100, percent);
  pre_auton();
  while (true) {
    wait(100, msec);
  }
}
