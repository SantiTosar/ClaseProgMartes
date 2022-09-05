/*
 ============================================================================
 Name        : Ejercicio3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int muestraNumero(int numero);

int main(void) {
	setbuf(stdout, NULL);
	int numero;;
	int resultado;

	printf("Ingrese cantidad papeles");
	scanf("%d", &numero);
	resultado = muestraNumero(numero);
	printf("El resultado es %d", resultado);

	return 0;
}
int muestraNumero(int numero)
{
	return numero;
}
