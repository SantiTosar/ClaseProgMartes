/*
 ============================================================================
 Name        : Ejercicio.c
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

	int numeroIngresado;
	int i;
	int numeroMinimoIngresado;
	int numeroParIngresado;
	int contadorNumerosPares;
	//int acumuladorNegativos;
	//int producto;
	int contadorPosicion;
	int posicionNumeroMayor;

	contadorNumerosPares = 0;
	contadorPosicion = 0;
	//acumuladorNegativos = 0;
	//producto = 1;

	for(i = 0; i < 3; i++)
	{
		contadorPosicion++;

		printf("Ingrese un numero");
		scanf("%d", &numeroIngresado);

		while(numeroIngresado == 0)
		{
			printf("Error. Ingrese un numero distinto de 0");
			scanf("%d", &numeroIngresado);
		}

		if(numeroIngresado < numeroMinimoIngresado || i == 0)
		{
			numeroMinimoIngresado = numeroIngresado;
		}

		/*No pude lograr el producto de los negativos;
		if(numeroIngresado < 0)
		{
			acumuladorNegativos += numeroIngresado;
			producto *= acumuladorNegativos;
		}
		*/


		if (numeroIngresado % 2 == 0)
		{
			contadorNumerosPares++;

			if(numeroIngresado > numeroParIngresado || contadorNumerosPares == 1)
			{
				numeroParIngresado = numeroIngresado;
				posicionNumeroMayor = contadorPosicion;
			}
		}
	}

	printf("El numero minimo ingresado es %d", numeroMinimoIngresado);
	printf("\nEl numero maximo de los pares ingresado es %d", numeroParIngresado);
	printf("\nLa posicion del numero mayor es %d", posicionNumeroMayor);


	return EXIT_SUCCESS;
}
