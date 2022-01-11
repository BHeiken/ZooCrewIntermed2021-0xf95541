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
  Project Title: Zoo Crew Inputs and Outputs Check Section 2: Potentiometer
  Team Members: Hannan Beiken, Adrian portillo
  Date: 12/9/21
  Section: 2


  Task Description: Test the potentiometer by making a program that control an output with it


  Pseudocode: Speed of right motor is proportional to value of potentiometer (Max motor speed when potentiometer at max value).
  						Turn on the motor with the speed defined above.
*/

task main()
{
	while(true)
	{



			float speed = SensorValue[potentiometer] / 32;
			startMotor(rightMotor, speed);



	}
}
