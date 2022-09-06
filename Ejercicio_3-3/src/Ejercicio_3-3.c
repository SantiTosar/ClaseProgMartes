/*
 Ejercicio 3-3: Crear una función que permita determinar si un número es par o no. La
función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 */

#include <stdio.h>
#include <stdlib.h>

int determinaNumeroPar();

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int resultado;

	printf("Ingrese un numero");
	scanf("%d", &numeroIngresado);

	resultado = determinaNumeroPar(numeroIngresado);
	printf("El resultado es %d", resultado);

	return EXIT_SUCCESS;
}
int determinaNumeroPar(int numero)
{
	if(numero % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
