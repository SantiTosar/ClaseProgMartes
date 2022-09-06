/*
Ejercicio 3-6: Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.
 */

#include <stdio.h>
#include <stdlib.h>

float pideValidaNumero(float numero);
float realizarDescuento();

int main(void) {
	setbuf(stdout, NULL);

	float resultadoConDescuento;

	resultadoConDescuento = realizarDescuento();
	printf("El resultado con descuento es de %.2f", resultadoConDescuento);

	return EXIT_SUCCESS;
}
float pideValidaNumero(float numero)
{
	while(numero < 10 || numero > 100)
	{
		printf("Error. Reingrese el numero");
		scanf("%f", &numero);
	}
	return numero;
}
float realizarDescuento()
{
	float numeroIngresado;
	int porcentaje;
	float resultado;

	printf("Ingrese un numero");
	scanf("%f", &numeroIngresado);

	porcentaje = -5;

	resultado = pideValidaNumero(numeroIngresado) + (pideValidaNumero(numeroIngresado) * porcentaje)/100;

	return resultado;
}
