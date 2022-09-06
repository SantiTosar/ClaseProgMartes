/*
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe.
En caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingresar un primer numero");
	scanf("%d", &numeroUno);

	printf("Ingresar un segundo numero");
	scanf("%d", &numeroDos);

	printf("Ingresar un tercer numero");
	scanf("%d", &numeroTres);


	if((numeroUno > numeroDos && numeroUno < numeroTres) || (numeroUno < numeroDos && numeroUno > numeroTres))
	{
		printf("el numero del medio es %d", numeroUno);
	}
	else if((numeroDos > numeroUno && numeroDos < numeroTres) || (numeroDos < numeroUno && numeroDos > numeroTres))
	{
		printf("El numero del medio es %d", numeroDos);
	}
	else if((numeroTres > numeroUno && numeroTres < numeroDos) || (numeroTres < numeroUno && numeroTres > numeroDos))
	{
		printf("El numero del medio es %d", numeroTres);
	}
	else
	{
		printf("No existe numero del medio");
	}

	return 0;
}
