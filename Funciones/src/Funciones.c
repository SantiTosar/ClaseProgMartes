/*
 ============================================================================
 Name        : Funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*prototipos
void pedirNumero(int numero); void no retorna nada.
int pedirNumero();
float pedirNumero();
*/
void pedirNumero(int numero);

int main(void) {
	setbuf(stdout, NULL);
	int ingreso;

	printf("\nIngrese un numero");
	scanf("%d", &ingreso);

	pedirNumero(ingreso);

	return 0;
}

void pedirNumero(int numero)
{
	printf("\nEl numero ingresado es %d", numero);
}
