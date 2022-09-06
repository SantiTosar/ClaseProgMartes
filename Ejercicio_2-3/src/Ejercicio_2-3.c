/*
Ejercicio 2-3: Usando el concepto de operadores lógicos booleanos en el condicional.
Solicitar un número al usuario e informar si el número es par o impar.
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
