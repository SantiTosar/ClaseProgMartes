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
