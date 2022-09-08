/*
 * operacion.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Santiago
 */
#include <stdio.h>
#include <stdlib.h>
void operacion(int numero1, int numero2)
{
	char operacionDeseada;
	int resultadoOperacion;

	printf("Que operacion desea realizar ? s=suma r=resta");
	fflush(stdin);
	scanf("%c", &operacionDeseada);

	while(operacionDeseada != 's' && operacionDeseada != 'r')
	{
		printf("Ingrese nuevamente la operacion deseada");
		scanf("%c", &operacionDeseada);
	}
	if(operacionDeseada == 's')
	{
		resultadoOperacion = numero1 + numero2;
		printf("El resultado de la suma es %d", resultadoOperacion);
	}
	else
	{
		resultadoOperacion = numero1 - numero2;
		printf("El resultado de la resta es %d", resultadoOperacion);
	}
}
