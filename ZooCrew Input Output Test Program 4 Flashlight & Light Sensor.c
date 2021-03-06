#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  encoderLower,   sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, led,            sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servo,         tmotorServoStandard, openLoop)
/*
  Project Title: Zoo Crew Inputs and Outputs Check Program 4: Flashlight & Light Sensor
  Team Members: Hannan Beiken, Adrian Portillo
  Date: January 5, 2022
  Section: 4


  Task Description: Test the flashlight by controlling it with an input.
										Test the light sensor by controlling an output with it

  Pseudocode: If light sensor detects darkness (higher value)
  							turn flashlight on
  						else
  							turn flashlight off
*/

task main()
{
	while (true)
	{



			if (SensorValue[lightSensor] > 320)
			{
				turnFlashlightOn(flashlight, 127);
			}
			else
			{
				turnFlashlightOff(flashlight);
			}



	}
}
