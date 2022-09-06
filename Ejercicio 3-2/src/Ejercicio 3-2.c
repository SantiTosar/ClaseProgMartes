/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Santiago Rodriguez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float pideNumeroFlotante();

int main(void) {
	setbuf(stdout, NULL);

	float respuesta;

	respuesta = pideNumeroFlotante();
	printf("El numero flotante es %f", respuesta);

	return EXIT_SUCCESS;
}
float pideNumeroFlotante(void)
{
	float numeroFlotante;

	printf("Ingre un numero");
	scanf("%.2f", &numeroFlotante);

	return numeroFlotante;
}
