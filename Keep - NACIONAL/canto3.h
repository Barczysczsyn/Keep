
void canto3()
{


	//dar uma re
	setMultipleMotors(-50, motorA, motorB);
	wait(3500, milliseconds);
	stopAllMotors();

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(100, milliseconds);

	//virar um tiquinho para esquerda
	setMotor(motorA, -35);
	setMotor(motorB, 50);
	wait(400, milliseconds);
	stopAllMotors();

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(850, milliseconds);
	stopAllMotors();


	//virar um tiquinho para direita
	setMotor(motorB, -45);
	setMotor(motorA, 50);
	wait(150, milliseconds);
	stopAllMotors();


	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(210, milliseconds);
	stopAllMotors();

	//ir meio torto para esquerda enquanto vai para frente
	setMotor(motorA, 45);
	setMotor(motorB, 50);
	wait(2700, milliseconds);
	stopAllMotors();


	//virar para direita
	setMotor(motorA,50);
	setMotor(motorB, -50);
	wait(200, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir meio torto para esquerda enquanto vai para frente
	setMotor(motorA, 45);
	setMotor(motorB, 50);
	wait(5100, milliseconds);
	stopAllMotors();

	//dar uma re
	setMultipleMotors(-50, motorA, motorB);
	wait(420, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//baixar garra
	baixarGarra();

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(650, milliseconds);
	stopAllMotors();


	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(650, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);
	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(150,milliseconds);

	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(100, milliseconds);


	//virar um pouco para direita, bem pouco mesmo
	setMotor(motorA, 50);
	setMotor(motorB, -50);
	wait(950, milliseconds);
	stopAllMotors();
	wait(1000, milliseconds);

	///////////////

	//ir para frente torto para direita
	setMotor(motorA, 50);
	setMotor(motorB, 35);
	wait(2800, milliseconds);
	stopAllMotors();
	wait(1000,milliseconds);


	// ir para frente
	setMotor(motorA, 40);
	setMotor(motorB, 40);
	wait(3000, milliseconds);
	stopAllMotors();
	wait(100,milliseconds);


	//dar uma mini r?
	setMultipleMotors(-50, motorA, motorB);
	wait(280, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	// ir para frente
	setMotor(motorA, 45);
	setMotor(motorB, 25);
	wait(900, milliseconds);
	stopAllMotors();
	wait(100,milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);
	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(1200, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//////

	//virar para direita
	setMotor(motorA,50);
	setMotor(motorB, -50);
	wait(680, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir para frente
	setMotor(motorA,50);
	setMotor(motorB,35);
	wait(500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//virar para direita
	setMotor(motorA,50);
	setMotor(motorB, -50);
	wait(600, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//alinar para tr�?
	setMultipleMotors(-50, motorA, motorB);
	wait(2000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(100, milliseconds);

	//ir  para frente
	setMultipleMotors(50, motorA, motorB);
	wait(3700, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir um pouco para tras
	setMultipleMotors(-50, motorA, motorB);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//virar para esquerda
	setMotor(motorB,50);
	setMotor(motorA,-50);
	wait(1300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(2400, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,30);
	moveMotor(motorC,80,degrees,30);
	stopAllMotors();
	wait(1000,milliseconds);

	//baixar garra
	baixarGarra();

	//levanta a garra
	setMotor(motorC,40);
	moveMotor(motorC,170,degrees,40);
	stopAllMotors();
	wait(2000,milliseconds);

	//baixar garra
	baixarGarra();

	///////////////////////////////////segunda limpeza da pista///////////////////////////////////

	//ir um pouco para frente
	setMultipleMotors(50, motorA, motorB);
	wait(600, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//gira 45 graus
	setMotor(motorA, 50);
	setMotor(motorB, -50);
	wait(500, milliseconds);
	stopAllMotors();
	wait(600, milliseconds);

	//ir um pouco para frente
	setMultipleMotors(50, motorA, motorB);
	wait(2700, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//gira 45 graus
	setMotor(motorA, -50);
	setMotor(motorB, 50);
	wait(480, milliseconds);
	stopAllMotors();
	wait(1000, milliseconds);


	//ir um pouco para frente
	setMultipleMotors(50, motorA, motorB);
	wait(500, milliseconds);
	stopAllMotors();
	wait(1000, milliseconds);


	//ir para frente torto
	setMotor(motorB,50);
	setMotor(motorA,40);
	wait(1000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir para frente (torto tambem)
	setMotor(motorA,40);
	setMotor(motorB,50);
	wait(2300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	/////

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(600, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(950, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);



	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(1000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,40);
	moveMotor(motorC,120,degrees,40);
	stopAllMotors();
	wait(50,milliseconds);

	//virar para esquerda
	setMotor(motorB,50);
	setMotor(motorA,-50);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//frente
	setMultipleMotors(50, motorA, motorB);
	wait(500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//virar para esquerda
	setMotor(motorB,50);
	setMotor(motorA,-50);
	wait(400, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(10, milliseconds);



	///////////


	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(1000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//baixar garra
	baixarGarra();
	stopAllMotors();

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(4500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(1300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//virar para direita
	setMotor(motorB,-50);
	setMotor(motorA,50);
	wait(1300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(3000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//levanta a garra
	setMotor(motorC,40);
	moveMotor(motorC,120,degrees,40);
	stopMotor(motorC);
	stopAllMotors();
	wait(200, milliseconds);



	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);










}
