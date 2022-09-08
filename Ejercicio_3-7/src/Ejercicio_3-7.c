/*
Ejercicio 3-7: Realizar un programa que: asigne a las variables numero1 y numero2
los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne a la
variable operacion el valor solicitado al usuario, valide el mismo 's'-sumar, 'r'-restar,
realice la operación de dichos valores a través de una función. Mostrar el resultado
por pantalla.
 */

#include <stdio.h>
#include <stdlib.h>

void operacion(int numero1, int numero2);

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	//int operaciones;

	printf("Ingrese un primer numero");
	scanf("%d", &numero1);
	while(numero1 < 10 || numero1 > 100)
	{
		printf("Error. Reingrese el primer numero");
		scanf("%d", &numero1);
	}
	printf("Ingrese un segundo numero");
	scanf("%d", &numero2);
	while(numero2 < 10 || numero2 > 100)
	{
		printf("Error. Reingrese el segundo numero numero");
		scanf("%d", &numero2);
	}

	operacion(numero1, numero2);

	return EXIT_SUCCESS;
}

