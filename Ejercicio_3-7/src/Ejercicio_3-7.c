/*
Ejercicio 3-7: Realizar un programa que: asigne a las variables numero1 y numero2
los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne a la
variable operacion el valor solicitado al usuario, valide el mismo 's'-sumar, 'r'-restar,
realice la operación de dichos valores a través de una función. Mostrar el resultado
por pantalla.
 */

#include <stdio.h>
#include <stdlib.h>

int solicitaNumero(int numero);
//int validaNumero(int numeroA, int numeroB);

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;

	printf("Ingrese un primer numero");
	scanf("%d", &numero1);
	printf("Ingrese un segundo numero");
	scanf("%d", &numero2);

	while(numero1 < 10 || numero1 > 100)
	{
		printf("Ingrese nuevamente el primer numero");
		scanf("%d", &numero1);
	}
	while(numero2 < 10 || numero2 > 100)
	{
		printf("Ingrese nuevamente el segundo numero");
		scanf("%d", &numero2);
	}


	return EXIT_SUCCESS;
}
int solicitaNumero(int numero)
{



	return 0;
}

/*int validaNumero(int numeroA, int numeroB)
{
	while(numeroA < 10 || numeroA > 100)
	{
		printf("Error. Reingrese el primer numero");
		scanf("%d", &numeroA);
	}

	while( numeroB < 10 || numeroB > 100)
	{
		printf("Error. Reingrese segundo numero");
		scanf("%d", &numeroB);
	}

	return numeroA, numeroB;
}
*/
