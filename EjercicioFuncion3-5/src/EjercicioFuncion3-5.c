/*
 ============================================================================
 Name        : funcionEjercicio3-5.c
 Author      : Rodriguez Santiago
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
void restarCuatro();

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int resultadoRestaUno;
	int resultadoRestaDos;
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

	printf("\nIngresar un primer numero para la tercera resta");
	scanf("%d", &primerNumero);

	printf("Ingresar un segundo primer numero para la tercera resta");
	scanf("%d", &segundoNumero);

	restarTres(primerNumero, segundoNumero);
	restarCuatro();

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

	printf("\nIngresar primer numero para la segunda resta");
	scanf("%d", &primerNumero);
	printf("Ingresar segundo numero para la segunda resta");
	scanf("%d", &segundoNumero);

	resultadoSegundaResta = primerNumero - segundoNumero;

	return resultadoSegundaResta;
}
void restarTres(int primerNumero, int segundoNumero)
{
	int resultadoTreceraResta;

	resultadoTreceraResta = primerNumero - segundoNumero;
	printf("El resultado de la tercera resta es %d", resultadoTreceraResta);
}
void restarCuatro()
{
	int numeroUno;
	int numeroDos;
	int resultado;

	printf("\nIngrese primer numero para la cuarta resta");
	scanf("%d", &numeroUno);
	printf("Ingrese segundo numero para la cuarta resta");
	scanf("%d", &numeroDos);
	resultado = numeroUno - numeroDos;

	printf("El resultado de la resta es %d", resultado);
}
