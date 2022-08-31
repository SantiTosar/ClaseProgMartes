/*
 ============================================================================
 Name        : Ejercicio_2-1.c
 Author      : Santiago Rodriguez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int i;
	float promedio;
	int acumuladorNumeros;

	acumuladorNumeros = 0;

	for(i = 0; i < 7; i++)
	{
		printf("Ingrese un numero negativo");
		scanf("%d", &numero);
		while(numero > -1)
		{
			printf("Error. Reingrese numero negativo");
			scanf("%d", &numero);
		}

		acumuladorNumeros += numero;
	}
	promedio = acumuladorNumeros / i;
	printf("El promedio de los numeros ingresados es: %d", promedio);


	return EXIT_SUCCESS;
}
