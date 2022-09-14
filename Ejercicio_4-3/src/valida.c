/*
 * valida.c
 *
 *  Created on: 14 sep. 2022
 *      Author: Santiago
 */
#include <stdio.h>
#include <stdlib.h>
void validaTemperatura(float* fahrenheit, float* celsius){

	while (*fahrenheit < 32 || *fahrenheit > 212) {
		printf("Reingrese temperatura de la escala Fahremheit");
		scanf("%f", fahrenheit);
	}
	while (*celsius < 0 || *celsius > 100) {
		printf("Reingrese temperatura de la escala Celsius");
		scanf("%f", celsius);
	}
}
