/*
Desafío: Menú-Funciones y Bibliotecas

Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar

 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int respuesta;

	int banderaIniciar;
	int banderaProcesar;
	int banderaFinalizar;

	banderaIniciar = 0;
	banderaProcesar = 0;
	banderaFinalizar = 0;


	do
	{
		opcion = muestraOpciones();

		switch(opcion)
		{
		case 1:
			banderaIniciar = 1;
			printf("INICIO CORRECTAMENTE \n ");
		break;

		case 2:
			if(banderaIniciar == 0)
			{
				printf("Debe de iniciar antes de procesar \n");
			}
			else
			{
				banderaProcesar = 1;
				printf("PROCESO CORRECTAMENTE\n");
			}
		break;

		case 3:
			if(banderaIniciar == 0)
			{
				printf("Debe de iniciar antes de finalizar\n");
			}
			else if(banderaProcesar == 0)
			{
				printf("Debe de procesar antes de finalizar\n");
			}
			else
			{
				banderaFinalizar = 1;
				printf("FINALIZO CORRECTAMENTE \n");
			}
		break;

		case 4:
			printf("Desea salir del menu ? 1/0");
			fflush(stdin);
			scanf("%d", &respuesta);

			if(respuesta == 1)
			{
				printf("Salio del programa");
			}
			else
			{
				opcion = 0;
			}

		break;
		}
	}
	while(opcion != 4);


	return EXIT_SUCCESS;
}


