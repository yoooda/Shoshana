#ifndef ROBOTMAP_H
#define ROBOTMAP_H

//SHOOTER
#define SHOOTER_ENCODER_A_PORT 2 
#define SHOOTER_ENCODER_B_PORT 3
#define SHOOTER_MOTOR1_PORT 5
#define SHOOTER_MOTOR2_PORT 6

//CHASSIS
#define CHASSIS_TALON_TL_PORT 1
#define CHASSIS_TALON_TR_PORT 3
#define CHASSIS_TALON_BL_PORT 2
#define CHASSIS_TALON_BR_PORT 4
#define CHASSIS_GYRO_PORT 2

//STACK
#define STACK_DOUBLE_SOLENOID_PORT_F 1 // high angle
#define STACK_DOUBLE_SOLENOID_PORT_R 2 // low angle
#define STACK_TALON_PORT 7
#define STACK_MS_PORT 3 //todo

// CAMERA
#define CAMERA_SERVO_VERTICAL_PORT 9
#define CAMERA_LED_PORT 1

// SHOOTER LIFT
#define SHOOTERLIFT_SOLENOID_F 4 // pull out
#define SHOOTERLIFT_SOLENOID_R 3 // pull in

// COMPRESSOR
#define COMPRESSOR_PRESSURE_SWITCH 1
#define COMPRESSOR_RELAY 2



#endif
