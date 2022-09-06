/*
 Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.
 */

#include <stdio.h>
#include <stdlib.h>

float pideNumeroFlotante();

int main(void) {
	setbuf(stdout, NULL);

	float respuesta;

	respuesta = pideNumeroFlotante();
	printf("El numero flotante es %.2f", respuesta);

	return EXIT_SUCCESS;
}
float pideNumeroFlotante(void)
{
	float numeroIngresado;

	printf("Ingrese un numero ");
	scanf("%f", &numeroIngresado);

	return numeroIngresado;
}
