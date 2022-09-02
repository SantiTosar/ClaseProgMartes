/*
 ============================================================================
 Name        : funcionEjercicio3-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int restarUno(int numeroUno,  int numeroDos);
int restarDos (void);
void restarTres(int primerNumero, int segundoNumero);

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int resultadoRestaUno;
	int resultadoRestaDos;
	int resultadoRestaTres;
	int primerNumero;
	int segundoNumero;

	printf("Ingresar un primer numero");
	scanf("%d", &numeroUno);
	printf("Ingresar un segundo numero");
	scanf("%d", &numeroDos);

	resultadoRestaUno = restarUno(numeroUno, numeroDos);
	printf("El resultado de la primera resta es %d", resultadoRestaUno);

	resultadoRestaDos = restarDos();
	printf("El resultado de la segunda resta es %d", resultadoRestaDos);

	printf("Ingrese un primer numero para la tercera resta");
	scanf("%d", &numeroUno);
	printf("Ingrese un segundo numero para la tercera resta");
	scanf("%d", &numeroDos);



	return EXIT_SUCCESS;
}
int restarUno(int numeroUno, int numeroDos)
{
	int resultadoPrimeraResta;
	resultadoPrimeraResta = numeroUno - numeroDos;
	return resultadoPrimeraResta;
}
int restarDos(void)
{
	int primerNumero;
	int segundoNumero;
	int resultadoSegundaResta;

	printf("\nIngresar primer numero");
	scanf("%d", &primerNumero);
	printf("Ingresar segundo numero");
	scanf("%d", &segundoNumero);

	resultadoSegundaResta = primerNumero - segundoNumero;

	return resultadoSegundaResta;
}
void restarTres(int primerNumero, int segundoNumero)
{
	int resultadoTreceraResta;

	printf("Ingrese un primer numero");
	scanf("%d", primerNumero);

	printf("Ingrese un segundo numero");
	scanf("%d", &segundoNumero);

	resultadoTreceraResta = primerNumero - segundoNumero;
	printf("El resultado de la resta es %d", resultadoTreceraResta);

}
