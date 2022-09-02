/*
 ============================================================================
 Name        : Ejercicio_2-6.c
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

	char caracterIngresado;
	int cantidadLetrasM;
	int i;

	cantidadLetrasM = 0;

	for(i=0 ; i < 5; i++)
	{
		printf("Ingrese caracter");
		fflush(stdin);
		scanf("%c", &caracterIngresado);
		switch(caracterIngresado)
		{
			case 'm':
				cantidadLetrasM++;
			break;
		}
	}

	if(cantidadLetrasM > 0)
	{
		printf("La cantidad de letras m es de %d", cantidadLetrasM);
	}
	else
	{
		printf("No se ingresaron letras m");
	}

	return EXIT_SUCCESS;
}
