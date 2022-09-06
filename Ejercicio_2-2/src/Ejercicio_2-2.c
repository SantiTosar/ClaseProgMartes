/*
Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);


	int numeroIngresado;
	int respuesta;
	int acumuladorNumeros;
	int acumuladorNumerosPositivos;
	int bandera;
	int numeroMinimo;
	float promedioPositivos;
	int contadorPositivos;

	int acumuladorNumerosNegativos;
	int maximoNegativo;
	int contadorNegativos;
	float promedioNegativos;



	acumuladorNumerosPositivos = 0;
	bandera = 0;
	acumuladorNumeros = 0;
	contadorPositivos = 0;
	contadorNegativos = 0;

	while(respuesta > 0)
	{

		fflush(stdin);

		printf("Ingrese un numero");
		scanf("%d", &numeroIngresado);

		printf("Desea continuar agregando numeros ? 0 para no o > 1 para si");
		scanf("%d", &respuesta);


		if(numeroIngresado > 0)
		{
			acumuladorNumerosPositivos += numeroIngresado;
			contadorPositivos++;
		}
		else if(numeroIngresado < 0)
		{
			acumuladorNumerosNegativos += numeroIngresado;
			contadorNegativos++;
		}

		if(numeroIngresado < numeroMinimo || bandera == 0)
		{
			numeroMinimo = numeroIngresado;
		}

		if(numeroIngresado > maximoNegativo || bandera == 0)
		{
			maximoNegativo = numeroIngresado;
			bandera = 1;
		}

		acumuladorNumeros += numeroIngresado;
	}

	promedioPositivos = acumuladorNumerosPositivos / contadorPositivos;
	promedioNegativos = acumuladorNumerosNegativos / contadorNegativos;

	printf("El promedio de numeros positivos %.2f\n y el numero minimo de los positivos es: %d", promedioPositivos, numeroMinimo);
	printf("El promedio de numeros negativos %.2f\n y el numero maximo de los negativos es: %d", promedioNegativos, maximoNegativo);



	return 0;
}
