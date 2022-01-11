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
  Project Title: Zoo Crew Inputs and Outputs Check Program 2: Line Follower
  Team Members: Hannan Beiken, Adrian portillo
  Date: 12/9/21
  Section: 2


  Task Description: Test the line follower by making a program to control an output with it.


  Pseudocode:	If line follower detects line or dark object,
  							start left motor
  						Else
  							stop left motor
*/

task main()
{
	while (true)
	{


		if (SensorValue[lineFollower] > 200)
			{
				startMotor(leftMotor, 40);
			}
			else
			{
				stopMotor(leftMotor);
			}


	}
}
