#pragma config(Sensor, S1,     luz1,           sensorEV3_Color)
#pragma config(Sensor, S2,     luz2,           sensorEV3_Color)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//|----------------------------------|//
//| VARIAVEIS ESTARA DENTRO DESTE .h |//
#include <variaveis.h>
//| VARIAVEIS ESTARA DENTRO DESTE .h |//
//|----------------------------------|//
//|  FUNCOES ESTARA DENTRO DESTE .h  |//
#include <funcoes.h>
//|  FUNCOES ESTARA DENTRO DESTE .h  |//

//|----------------------------------|//
//| SEGUELINHA ESTARA DENTRO DESTE .h|//
#include <seguelinha.h>
//| SEGUELINHA ESTARA DENTRO DESTE .h|//
//|----------------------------------|//


task obterCor(){
	while(true){

		getColorRawRGB(luz1,a1,b1,c1);
		getColorRawRGB(luz2,a2,b2,c2);

		abc1 = (a1) + (b1*4) + (c1);
		abc2 = (a2) + (b2*4) + (c2);

		//////////////////////////////////////////
		//////////////| SENSOR 1 |////////////////
		//////////////////////////////////////////

		////// PRETO ////////
		if(abc1<=abc1_preto){
			cor1=2;
		}

		////// MEIO PRETO ////////
		else if(abc1>=abc1_meiopreto_MIN && abc1<=abc1_meiopreto_MAX){
			cor1=3;
		}

		////// VERDE ////////
		else if(abc1>=abc1_verde_MIN && abc1<=abc1_verde_MAX){
			cor1=4;
		}

		////// BRANCO ////////
		else{
			cor1=1;
		}

		//////////////////////////////////////////
		//////////////| SENSOR 2 |////////////////
		//////////////////////////////////////////

		////// PRETO ////////
		if(abc2<=abc2_preto){
			cor2=2;
		}

		////// MEIO PRETO ////////
		else if(abc2>=abc2_meiopreto_MIN && abc2<=abc2_meiopreto_MAX){
			cor2=3;
		}

		////// VERDE ////////
		else if(abc2>=abc2_verde_MIN && abc2<=abc2_verde_MAX){
			cor2=4;
		}

		////// BRANCO ////////
		else{
			cor2=1;
		}

		//////////////////////////////////////////
		//////////////| SENSOR 3 |////////////////
		//////////////////////////////////////////

		// esta sendo utilizado apenas a condi�?�?�?�?�?

		//////////////////////////////////////////
		//////////////| FINAIS |////////////////
		//////////////////////////////////////////

		if (cor1==3 && cor2==3){
			cor1=1;
			cor2=1;
		}

		if (cor1==2 && cor2==2){
			cor1=1;
			cor2=1;
		}

	}//WHILE TRUE
}//TASK OBTERCOR


task main(){
	startTask(obterCor);

	//SUBIR GARRA ANTES *MOTIVO* SALA 3 CASO ESTEJA ABAIXADA
	setMotor(motorC,25);
	wait(1,	seconds);
	stopAllMotors();
	wait(1000,milliseconds);

	while(true){


		//	setMultipleMotors(20,motorA,motorB);

		seguelinha();

		displayCenteredBigTextLine(1,"cor1: %d, %d",abc1,cor1);
		displayCenteredBigTextLine(3,"cor2: %d, %d",abc2,cor2 );
		displayCenteredBigTextLine(7,"Dist_F: %d",Dist_Frente());
		displayCenteredBigTextLine(9,"Dist_L: %d",Dist_Lateral());


	} //FIM WHILE TRUE
} //FIM TASK MAIN
