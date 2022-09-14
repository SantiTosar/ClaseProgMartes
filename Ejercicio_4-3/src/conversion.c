/*
 * conversion.c
 *
 *  Created on: 14 sep. 2022
 *      Author: Santiago
 */
#include <stdio.h>
#include <stdlib.h>
void conversionTemperaturas(float temperaturafahrenheit, float temperaturacelsius){

	float resultadoFahremheitCelsius;
	float resultadoCelsiusFahremheit;

	resultadoFahremheitCelsius = (temperaturafahrenheit -32) / 1.8;
	printf("La conversion de Fahremheit a Celsius es %.2f grados Celsius\n",
			resultadoFahremheitCelsius);
	resultadoCelsiusFahremheit = (1.8 * temperaturacelsius) + 32;
	printf("La conversion de Celsius a Fahremheit es %.2f grados Fahremheit\n",
			resultadoCelsiusFahremheit);
}


