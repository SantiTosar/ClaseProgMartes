/*
 ============================================================================
 Name        : Ejercicio_1-2.c
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
	int numeroTres;

	printf("Ingrese un primer numero");
	scanf("%d", &numeroUno);
	printf("Ingrese un segundo numero");
	scanf("%d", &numeroDos);
	printf("Ingrese un tercer numero");
	scanf("%d", &numeroTres);

	if(numeroUno > numeroDos && numeroUno > numeroTres)
	{
		printf("El mayor de los numeros es el primero %d", numeroUno);
	}
	else if(numeroDos > numeroUno && numeroDos > numeroTres)
	{
		printf("El mayor de los numeros es el segundo: %d", numeroDos);
	}
	else
	{
		printf("El mayor de los numeros es el tercero: %d", numeroTres);
	}

	return 0;
}
