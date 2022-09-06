/*
Ejercicio 3-1: Crear una función que muestre por pantalla el número entero que
recibe como parámetro.
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
