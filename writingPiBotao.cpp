#include <iostream>
#include <wiringPi.h>
using namespace std;
#define LED_GPIO 17
#define BUTTON_GPIO 27

int main(){


	wiringPiSetupGpio();
	pinMode(LED_GPIO,OUTPUT);
	pinMode(BUTTON_GPIO,INPUT);


	while (true)
	{
		digitalWrite(LED_GPIO,digitalRead(BUTTON_GPIO));
		cout << "Valor Botao: " << digitalRead(BUTTON_GPIO) << endl;
	}


	return 0;

}