/*
Ejercicio 4-2: Realizar una función Suma que reciba como parámetros dos enteros (los que
va a sumar) y un puntero a entero que guardara el resultado de esta. La función retorna 1 si
pudo realizar la suma y cero en caso de no haberla podido realizar.
Rodriguez Santiago Div D
 */

#include <stdio.h>
#include <stdlib.h>

int suma(int numeroUno,int numeroDos, int *resultado);

int main(void) {
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int resultadoSuma;

	printf("Ingrese un primer numero");
	scanf("%d", &numeroUno);
	printf("Ingrese un segundo numero");
	scanf("%d", &numeroDos);

	resultadoSuma = suma(numeroUno, numeroDos, &resultadoSuma);
	if(suma(numeroUno,numeroDos,&resultadoSuma) == 1){
		printf("El resultado de la suma es %d", resultadoSuma);
	}else{
		printf("Hubo un error, reintente la suma");
	}

	return EXIT_SUCCESS;
}
int suma(int numeroUno,int numeroDos, int *resultado){

	int error;
	error = 0;
	if(numeroUno > 0 || numeroDos > 0){
		*resultado = numeroUno + numeroDos;
		error = 1;
	}
	return error;
}
