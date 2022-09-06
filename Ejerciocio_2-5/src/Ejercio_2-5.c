/*Debemos generar el pedido de libretas universitarias a la imprenta para los alumnos
al regreso a la presencialidad. De cada persona debemos obtener los siguientes
datos:
número de legajo (4 cifras sin ceros a la derecha),
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad (más de 17),
año de ingreso (validar por favor)
y género ('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por libreta universitaria es de $450.
Se debe informar (solo si corresponde):
a) La cantidad de personas mayores de 60 años.
b) El legajo y edad de la mujer que ingreso hace más tiempo.
c) Cuanto debe abonar la facultad por las libretas sin el descuento
d) Si se solicitan mas de 5 libretas hay un 5% de descuento, si se solicitan más de
10 libretas se hace 10%. Además, por cada alumno mayor de 60 años al valor original
de la libreta se le hace un 25%. Informar los valores si corresponde.*/

#include <stdio.h>
#include <stdlib.h>
#define precioPorLibreta  450

int main(void) {
	setbuf(stdout, NULL);

	int numeroLegajo;
	char estadoCivil;
	int edad;
	int fechaDeIngreso;
	char genero;
	int respuesta;

	int personasMayoresSesenta;

	int mujerIngresoMayorTiempo;
	int edadMujerMayorTiempo;
	int legajoMujerMayorTiempo;

	int contadorLibretas;
	int totalPagoLibretas;

	int porcentajeDescuento;
	int precioConDescuento;
	int contadorAlumnoMayorDeSesenta;


	respuesta = 0;
	personasMayoresSesenta = 0;
	contadorLibretas = 0;


	while(respuesta == 0)
	{
		printf("Ingrese numero de legajo");
		scanf("%d", &numeroLegajo);
		while(numeroLegajo < 1111)
		{
			printf("\nError. Ingrese un numero mayor a 1111");
			scanf("%d", &numeroLegajo);
		}

		printf("Ingrese estado civil");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		while(estadoCivil != 'c' && estadoCivil != 's' && estadoCivil != 'v')
		{
			printf("Error. Ingrese estado civil nuevamente");
			fflush(stdin);
			scanf("%c", &estadoCivil);
		}

		printf("Ingrese edad");
		scanf("%d", &edad);
		while(edad < 17)
		{
			printf("Error. Ingrese edad");
			scanf("%d",  &edad);
		}

		printf("Ingrese fecha de ingreso");
		scanf("%d", &fechaDeIngreso);
		while(fechaDeIngreso > 2022)
		{
			printf("Error. Ingrese fecha de ingreso valido");
			scanf("%d", &fechaDeIngreso);
		}
		printf("Ingrese genero");
		fflush(stdin);
		scanf("%c", &genero);
		while(genero != 'f' && genero != 'm' && genero != 'o')
		{
			printf("Error. Reingrese genero valido");
			fflush(stdin);
			scanf("%c", &genero);
		}

		printf("Desea continuar ingresando mas datos? 0 para si, 1 o mas para no");
		scanf("%d", &respuesta);

		if(edad > 60)
		{
			personasMayoresSesenta++;
		}

		if(fechaDeIngreso < mujerIngresoMayorTiempo || respuesta == 0)
		{
			mujerIngresoMayorTiempo = fechaDeIngreso;
			edadMujerMayorTiempo = edad;
			legajoMujerMayorTiempo = numeroLegajo;
		}

		contadorLibretas++;

		if(contadorLibretas > 5)
		{
			porcentajeDescuento = -5;
		}
		else if(contadorLibretas > 10)
		{
			porcentajeDescuento = -10;
		}
	}
	totalPagoLibretas = contadorLibretas * precioPorLibreta;
	precioConDescuento = totalPagoLibretas - (totalPagoLibretas * porcentajeDescuento) / 100;

	printf("\nLa cantidad de personas mayores a 60 es de %d", personasMayoresSesenta);
	printf("\nEl legajo de la mujer que ingreso hace mas tiempo es %d y su edad es %d", legajoMujerMayorTiempo, edadMujerMayorTiempo);
	printf("\nEl total a pagar sin descuento es de %d", totalPagoLibretas);

	return EXIT_SUCCESS;
}
