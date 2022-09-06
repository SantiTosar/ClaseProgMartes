/*
 ============================================================================
 Name        : Ejercicio_3-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int determinaNumeroPar();

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int resultado;

	printf("Ingrese un numero");
	scanf("%d", &numeroIngresado);

	resultado = determinaNumeroPar(numeroIngresado);
	printf("El resultado es %d", resultado);

	return EXIT_SUCCESS;
}
int determinaNumeroPar(int numero)
{
	if(numero % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
