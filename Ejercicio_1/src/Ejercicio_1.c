/*
 ============================================================================
 Name        : Ejercicio_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int suma;

	printf("Ingrese un primer numero");
	scanf("%d", &numeroUno);
	while(numeroUno < -50 || numeroUno > 100)
	{
		printf("Reingresar primer numero");
		scanf("%d", &numeroUno);
	}
	printf("Ingrese un segundo numero");
	scanf("%d", &numeroDos);
	while(numeroDos < -50 || numeroDos > 100)
	{
		printf("Reingrese segundo numero");
		scanf("%d", &numeroDos);
	}

	suma = numeroUno + numeroDos;

	printf("El resultado de la suma es %d", suma);

	return 0;
}
