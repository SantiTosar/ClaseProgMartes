/*
Ejercicio 4-3: Realizar un programa que permita la carga de temperaturas en Celsius y
Fahrenheit, validando las temperaturas ingresadas estén entre el punto de congelación y de
ebullición del agua para cada tipo de escala. Las validaciones se hacen en una biblioteca. Las
funciones de conversión de Fahrenheit a Celsius y de Celsius a Fahrenheit se hacen en otra.
 */

#include <stdio.h>
#include <stdlib.h>

void validaTemperatura(float* fahrenheit, float* celsius);
void conversionTemperaturas(float temperaturaUno, float temperaturaDos);

int main(void) {
	setbuf(stdout,NULL);

	float gradosFahremheit;
	float gradosCelsius;

	printf("Ingrese temperatura en fahrenheit");
	scanf("%f", &gradosFahremheit);
	printf("Ingrese temperatura en Celsius");
	scanf("%f", &gradosCelsius);

	validaTemperatura(&gradosFahremheit,&gradosCelsius);

	conversionTemperaturas(gradosFahremheit,gradosCelsius);

	return EXIT_SUCCESS;
}

