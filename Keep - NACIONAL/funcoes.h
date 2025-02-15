//| AQUI SERAO ARMAZENADAS TODAS AS VARIAVEIS |//
/////////////////////////////////////////////////

// funcoes para sensores
int Dist_Frente() {
    //return SensorValue(S3);
    //jmbv 20/09/2022 detectar distancia do sensor da frente
    return read_sensor_US1( ARDUINO_ADDRESS, 1, true);
}

int cor3() {
	return getColorName(S3);
}
  
//jmbv 20/09/2022 funcao que retorna o valor da distancia do sensor da esquerda
int	Dist_LateralEsq() {
	return SensorValue(S4);
}

//jmbv 20/09/2022 funcao que retorna o valor da distancia do sensor da direita
int	Dist_LateralDir() {
	return SensorValue(S4);
}

// funcao para abaixar a garra
void baixarGarra(){
	stopMotor(motorC);
	wait(700,milliseconds);
	setMotor(motorC, -13);
	delay(1500);
	stopMotor(motorC);
	wait(700,milliseconds);
}

// funcao do meio preto esquerda
void meiopreto_esq(){
	setMotor(motorA,-25);
	setMotor(motorB, 25);
	wait(20,milliseconds);
}

// funcao do meio preto direita
void meiopreto_dir(){
	setMotor(motorA, 25);
	setMotor(motorB,-25);
	wait(20,milliseconds);
}
