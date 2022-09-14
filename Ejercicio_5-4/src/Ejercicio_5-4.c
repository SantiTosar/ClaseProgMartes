/*
Ejercicio 5-4: Pedir 10 números entre -100 y 100, guardarlos en un Array. Determinar:
a) Cantidad de negativos.
b) Sumatoria de los impares.
c) El mayor de los pares.
d) Listado de los números ingresados.
e) Listado de los números mayores a 15.
f) Listado de los números de las posiciones impares.
*/


#include <stdio.h>
#include <stdlib.h>
#define CANT 2
int main(void) {
	setbuf(stdout,NULL);

	int numeroIngresado[CANT];
	int cantidadNegativos;

	int sumatoriaImpares;


	cantidadNegativos = 0;
	sumatoriaImpares = 0;

	for(int i = 0; i < CANT; i++)
	{
		printf("Ingrese un numero");
		scanf("%d", &numeroIngresado[i]);

		while(numeroIngresado[i] < -100 || numeroIngresado[i] > 100)
		{
			printf("Ingrese nuevamente un numero");
			scanf("%d", &numeroIngresado[i]);
		}
		if(numeroIngresado[i] < 0)
		{
			cantidadNegativos++;
		}
		if(numeroIngresado[i] % 2 != 0)
		{
			sumatoriaImpares += numeroIngresado[i];
		}
	}
	printf("la cantidad de negativos es de %d\n", cantidadNegativos);
	printf("La sumatoria de numeros impares es de %d\n", sumatoriaImpares);

	for(int i = 0; i < CANT - 1; i++)
		{
			printf("La posicuion es %d y el numero ingresado es %d",i , numeroIngresado[i]);
		}

	return EXIT_SUCCESS;
}
