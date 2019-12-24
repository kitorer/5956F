using namespace vex;

extern brain Brain;
extern controller Controller1;
// VEXcode devices
extern motor LeftBack;
extern motor RightBack;
extern motor LeftFront;
extern motor RightFront;
extern motor IntakeLeft;
extern motor IntakeRight;
extern motor Gearbox;
extern motor Arm;
void tankDrive();
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );