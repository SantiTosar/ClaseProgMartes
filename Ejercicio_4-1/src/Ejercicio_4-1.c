/*
Ejercicio 4-1: Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
un número. Utilizar la función de PedirNumero de la ejercitación 3. Por ejemplo:
5! = 5*4*3*2*1 = 120
Rodriguez Santiago Div D
 */

#include <stdio.h>
#include <stdlib.h>
#include "pideNumero.h"


int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int factor;
	int respuesta;

	factor = 1;
	respuesta = 0;

	do {
		numeroIngresado = pideNumero();
		factor *= numeroIngresado;
		printf("Desea ingresar mas numeros ? 0 no 1 si");
		scanf("%d", &respuesta);
	} while (respuesta == 1);
	printf("El resultado es %d", factor);

	return EXIT_SUCCESS;
}

