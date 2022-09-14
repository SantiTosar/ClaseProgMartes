/*
. Hacer el menú de un programa en el MAIN con las siguientes opciones:
1. Loguearse
2. Comprar
3. Ver mis compras
4. Vender
5. Salir
.Al menú anterior chequear que no pueda ingresar a ninguna opción si no se logueó.
.Ahora agregamos, chequear que no pueda ver sus compras, si no ingresó primero a
comprar al menos una vez.
.Cuando se ingresa a la opción vender del menú, debe abrirse otro menú que contenga:
1. Vender
2. Hacer factura
3. Volver atrás.
. A lo anterior sumarle que haya compras para poder vender. (Si compré una vez y vendí
una vez no puedo ingresar a vender).
. Pasar las acciones de menú a funciones y llevarlas a una biblioteca
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	int banderaInicioSesion;
	int compras;

	int opcionesVender;

	banderaInicioSesion = 0;
	compras = 0;

	do{
		printf("Ingrese una opcion"
				"\n1) Loguearse\n"
				"2) Comprar\n"
				"3) Ver mis compras\n"
				"4) Vender\n"
				"5) Salir\n");
		scanf("%d",&opcion);

		switch(opcion){
		case 1://loguearse
			printf("Se ha logueado\n");
			banderaInicioSesion = 1;
		break;

		case 2://comprar
			if (banderaInicioSesion == 0) {
				printf("Debe de iniciar sesion\n");
			} else {
				compras++;
				printf("Usted compro un producto\n");
			}
		break;

		case 3://ver mis compras
			if(banderaInicioSesion == 0){
				printf("Debe de iniciar sesion\n");
			}
			if(compras == 0){
				printf("Debe de comprar algo previamente\n");
			}
		break;

		case 4://vender
			if(banderaInicioSesion == 0){
				printf("Debe de iniciar sesion\n");
			} else {
				printf("\nIngrese opcion"
						"\n1) Vender"
						"\n2) Hacer factura"
						"\n3)Volver atras\n");
				scanf("%d",&opcionesVender);
				switch(opcionesVender){
				case 1:
					if(compras == 0){
						printf("No tiene nada para vender\n");
					} else {
						compras--;
						printf("Usted vendio un producto\n");
					}
				break;
				}
			}
		break;
		case 5://salir
			printf("Usted salio del menu");
		break;
		}

	}while(opcion != 5);

	return EXIT_SUCCESS;
}
