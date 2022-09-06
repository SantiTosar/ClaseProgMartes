/*
 Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int i;
	float promedio;
	int acumuladorNumeros;

	acumuladorNumeros = 0;

	for(i = 0; i < 7; i++)
	{
		printf("Ingrese un numero negativo");
		scanf("%d", &numero);
		while(numero > -1)
		{
			printf("Error. Reingrese numero negativo");
			scanf("%d", &numero);
		}

		acumuladorNumeros += numero;
	}
	promedio = acumuladorNumeros / i;
	printf("El promedio de los numeros ingresados es: %.2f", promedio);


	return EXIT_SUCCESS;
}
