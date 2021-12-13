char operateDoor(char doorState) {
	if (doorState == 'c') {
		startMotor(motor, 25);
		//while the door is closing, check if emergency switch pressed and when door is closed
		//if emergency pressed, stop door and return code open midway
		while (doorState == 'c') {
			if (sensorValue[emergencySwitch] == 1) {
				stopMotor(motor);
				return 'm';
			} else if (sensorValue[quad] >= *openvalue*) {
				stopMotor(motor);
				return 'o';
			}
		}

	} else if (doorState == 'o') {
		startMotor(motor, -25);
		//While door is open, check if emergency switch pressed or if object in doorway
		//if emergency pressed, stop door and return code open midway
		while (doorState == 'o') {
			if (sensorValue[emergencySwitch] == 1) {
				stopMotor(motor);
				return 'm';
			} else if (sensorValue[quad] >= *closedvalue*) {
				stopMotor(motor);
				return 'c';
			//if object in door way or less than 10 inches from sonar, stop door and return code open midway
			} else if (sensorValue[sonar] <= 10)
				stopMotor(motor);
				return 'm';
		}

	} else if (doorState == 'm') {
		return operateDoor('o');
	}
}

task main() {
	//replace with case switch if possible
	//quad prob doesn't keep position after reboot so door must be fully closed before shutting down
	char doorState = 'c';

	while (true) {
		if (sensorValue[bumpSwitch] == 1 ) {
			doorState = operateDoor(doorState);
		}
	}
}
