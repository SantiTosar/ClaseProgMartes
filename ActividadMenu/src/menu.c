/*
 * menu.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Santiago
 */
#include <stdio.h>
#include <stdlib.h>
int muestraOpciones()
{
	int retornar;

	printf("\n1) Iniciar \n"
					"2) Procesar \n"
				    "3) Finalizar \n"
				    "4) salir\n");
			printf("\nIngrese una opcion");
			scanf("%d", &retornar);


	return retornar;
}

