#include "Vex.h"
bool slow;

void setDrive(int leftSpeed,int rightSpeed){
     LeftBack.setVelocity(leftSpeed, percent);
    LeftFront.setVelocity(leftSpeed, percent);
    RightBack.setVelocity(rightSpeed, percent);
    RightFront.setVelocity(rightSpeed, percent);
}
void spinforward(){
    LeftBack.spin(forward);
    RightBack.spin(forward); 
    LeftFront.spin(forward);
    RightFront.spin(forward);
}
void tankDrive(){
  if(Controller1.ButtonA.pressing()&&slow==false){
    slow= true;
  }
  else if(Controller1.ButtonA.pressing()&&slow==true){
    slow=false;
  }
    int leftSpeed = Controller1.Axis3.position();
    int rightSpeed = Controller1.Axis2.position();   

  if(slow==false){  
    setDrive(leftSpeed,rightSpeed);
 spinforward();
  }
  
  if(slow==true|| Controller1.Axis3.position()>Controller1.Axis2.position()||
  Controller1.Axis2.position()>Controller1.Axis3.position()){ 
    setDrive(leftSpeed*.4,rightSpeed*.4);
spinforward();
  }    
}
