#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  encoderLower,   sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servo,         tmotorServoStandard, openLoop)
/*
  Project Title: Zoo Crew R/L Motor Servo Program 1
  Team Members: Hannan Beiken, Adrian portillo
  Date: 12/9/21
  Section: 2


  Task Description: Verify line follower function and Potentiometer function


  Pseudocode: When the potentiometer gear is turned all the way to the left the right motor stops turning, when the potentiometer gear is in the middle it spins to the right,
  when the potentiometer gear is turned to the left the right motor will turn to the left and turn slower. Dark objects cause the motor to move to the left and the light objects slow or stop the
  motor.

*/

task main()
{                                     //Program begins, insert code within curly braces
	while(true)
	{
			float speed = sensorValue[potentiometer] / 32;
			startMotor(rightMotor, speed);
			float speed2 = sensorValue[lineFollower] / 12;
			startMotor(leftMotor, speed2);

	}
}
