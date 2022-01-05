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
  Project Title: Zoo Crew Inputs and Outputs Check Program 4
  Team Members: Hannan Beiken, Adrian Portillo
  Date: January 5, 2022
  Section: 4


  Task Description: Verify functions of flashlight, ultrasonic sensor, and light sensor


  Pseudocode:

*/

task main()
{
	while (true)
	{



			float brightness = SensorValue[lightSensor] / 8.5;
			turnFlashlightOn(flashlight, brightness);

			if (SensorValue[sonar] <= 5)
			{
				stopMotor(leftMotor);
			}
			else
			{
				startMotor(leftMotor, 25);
			}



	}
}
