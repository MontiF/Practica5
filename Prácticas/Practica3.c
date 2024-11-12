#include <stdio.h>
#include <stdlib.h>
#include <string.h> //librería para el strcmp

//struct apartado 1
struct Producto{
	char nombre[20];
	int cantidad;
};

int main(){
	struct Producto productos[10];
	int total_productos = 1;
	char respuesta[10], busqueda[20];

	printf("Introduce el total de productos (máx 10): ");
	scanf("%d", &total_productos);
	if(total_productos > 10){
		printf("Solo admite hasta 10 tipos de productos\n");
	} else {
		for (int i = 0; i < total_productos; i++){
			printf("Introduce el nombre del producto: ");
			scanf("%s", productos[i].nombre);
			printf("Introduce su stock: ");
			scanf("%d", &productos[i].cantidad);
		}
	}

	printf("Inventario Completo:\n");
	for(int i = 0; i < total_productos; i++){
		printf("Producto %d: %s - %d unidades\n", i+1, productos[i].nombre, productos[i].cantidad);
	}

	printf("¿Desea reabastecer algún producto? (si/no): ");
	scanf("%s", respuesta);
	for(int i = 0; i < total_productos; i++){
		if (strcmp(respuesta,"si") == 0){
			printf("Ingrese el nombre del producto: ");
			scanf("%s", productos[i].nombre);
			printf("Cantidad a añadir: ");
			scanf("%d", &productos[i].cantidad);
		}
	}
	printf("Inventario reabastecido:\n");
	for(int i = 0; i < total_productos; i++){
		printf("Producto %d: %s - %d unidades\n", i+1, productos[i].nombre, productos[i].cantidad);
	}

	printf("Productos en baja existencia:\n");
	for(int i = 0; i < total_productos; i++){
		if(productos[i].cantidad < 5){
			printf("%s - %d unidades\n", productos[i].nombre, productos[i].cantidad);

		}

	}



	printf("¿Desea buscar algún producto? (si/no): ");
	scanf("%s", respuesta);
	if (strcmp(respuesta, "si") == 0) {
		printf("Ingrese el nombre del producto a buscar: ");
		scanf("%s", busqueda);

		int encontrado = 0; 
		for (int i = 0; i < total_productos; i++) {
			if (strcmp(busqueda, productos[i].nombre) == 0) {
				printf("Cantidad en stock de %s: %d unidades\n", productos[i].nombre, productos[i].cantidad);
				encontrado = 1; 
				break;
			}
		}

		if (!encontrado) {
			printf("El producto %s no se encuentra en el inventario.\n", busqueda);
		}
	}
	return 0;
}

