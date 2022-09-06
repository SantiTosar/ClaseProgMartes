/*
 Ejercicio 3-4: Especializar la función del punto 3.1 y 3.2 para que valide
el número en un rango determinado.
 */

#include <stdio.h>
#include <stdlib.h>

float muestraNumero(float numero);
float pideNumeroFlotante();

int main(void) {
	setbuf(stdout, NULL);

	float resultado;

	resultado = pideNumeroFlotante();
	muestraNumero(resultado);

	printf("El numero ingresado es %.2f", muestraNumero(resultado));

	return EXIT_SUCCESS;
}
float pideNumeroFlotante()
{
	float numeroIngresado;

	printf("Ingrese un numero ");
	scanf("%f", &numeroIngresado);

	while(numeroIngresado < 0.00 || numeroIngresado > 9.99)
	{
		printf("Error. Ingrese nuevamente un numero");
		scanf("%f", &numeroIngresado);
	}
	return numeroIngresado;
}
float muestraNumero(float numero)
{
	return numero;
}
