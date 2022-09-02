/*
 ============================================================================
 Name        : Ejercio_2-5.c
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

	float numeroLegajo;
	char estadoCivil;
	int edad;
	int ingreso;
	char genero;
	int respuesta;
	int personasMayoresASesenta;

	int menorFechaDeIngreso;
	int bandera;
	float legajoIngresoMujer;
	int edadIngresoMujer;

	int cantidadLibretas;
	int libretaUniversitaria;
	int pagoTotalLibretaUniversitaria;

	int porcentaje;
	int acumuladorPorcentajeMayorASesenta;
	int descuento;
	int descuentoParaMayarores;


	respuesta = 1;
	personasMayoresASesenta = 0;
	bandera = 0;
	cantidadLibretas = 0;
	libretaUniversitaria = 450;
	acumuladorPorcentajeMayorASesenta = 0;

	while(respuesta == 1)
	{
		printf("Ingrese numero de legajo");
		scanf("%.0f" , &numeroLegajo );

		printf("Ingrese estado civil s/c/v");
		scanf("%c", &estadoCivil);

		while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v')
		{
			printf("Error. Reingrese estado civil valido");
			scanf("%c", &estadoCivil);
		}

		printf("ingrese edad");
		scanf("%d", &edad);

		while(edad < 17)
		{
			printf("ERROR. Ingrese edad valida");
			scanf("%d", &edad);
		}

		printf("Ingrese año de ingreso");
		scanf("%d", &ingreso);
		while(ingreso > 2022)
		{
			printf("Error. Reingrese año de ingreso");
			scanf("%d", &ingreso);
		}

		printf("Ingrese genero");
		scanf("%c", &genero);

		while(genero != 'f' && genero != 'm' && genero != 'o')
		{
			printf("Error. Reingrese genero");
			scanf("%c", &genero);
		}

		if(edad > 60)
		{
			personasMayoresASesenta++;
			porcentaje = -25;
			acumuladorPorcentajeMayorASesenta += porcentaje;
		}
		switch(genero)
		{
			case 'm':
				if(ingreso < menorFechaDeIngreso || bandera == 0)
				{
					menorFechaDeIngreso = ingreso;
					legajoIngresoMujer = numeroLegajo;
					edadIngresoMujer = edad;
				}
		}
		cantidadLibretas ++;
	}
	if(cantidadLibretas > 5)
	{
		porcentaje = -5;
	}
	else if(cantidadLibretas > 10)
	{
		porcentaje = -10;
	}
	else
	{
		porcentaje = 0;
	}

	pagoTotalLibretaUniversitaria = libretaUniversitaria * cantidadLibretas;

	descuento = pagoTotalLibretaUniversitaria - (pagoTotalLibretaUniversitaria * porcentaje ) / 100;
	descuentoParaMayarores = cantidadLibretas - (pagoTotalLibretaUniversitaria * acumuladorPorcentajeMayorASesenta) / 100;

	printf("La cantidad de personas mayores a 60 es de %d", personasMayoresASesenta);
	printf("\nEl numero de legajo de la mujer que ingreso hace mas tiempo es %f y su edad es %d", legajoIngresoMujer, edadIngresoMujer);
	printf("\nEl pago total de la universidad por las libretas universitarias es de %d", pagoTotalLibretaUniversitaria);



	return EXIT_SUCCESS;
}
