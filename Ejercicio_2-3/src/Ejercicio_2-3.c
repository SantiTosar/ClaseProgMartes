/*
 ============================================================================
 Name        : Ejercicio_2-3.c
 Author      : Santiago Rodriguez 1D
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;

	printf("Ingresado un numero");
	scanf("%d", &numeroIngresado);

	if(numeroIngresado % 2 == 0)
	{
		printf("El numero ingresado es par y es %d", numeroIngresado);
	}
	else
	{
		printf("El numero ingresdao es inpar y es %d", numeroIngresado);
	}


	return EXIT_SUCCESS;
}
