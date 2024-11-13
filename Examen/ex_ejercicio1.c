#include <stdio.h>
#include <stdlib.h>

int main(){

	// el numero0 es America, el numero1 es Europa
	// el numero de las sedes va consecutivo
	// el numero0 es televisores, el numero1 es telefonos, el numero2 es ordenadores, y el numero3 es electrodomesticos 
	// el numero de los modelos son consecutivos
	// el numero de lotes son consecutivos

	int inventario[2][3][4][5][10];			
		inventario[0][0][3][1][0] = 14;	
		inventario[1][1][1][2][6] = 25;	
		inventario[1][2][2][4][5] = 43;		
		inventario[0][0][0][3][8] = 82;		
		inventario[1][1][3][0][2] = 12;	
		inventario[1][1][0][0][9] = 200;		//inventario examen

		// Definir lo que se va a imprimir
		printf("Las unidades de América, sede 1, electrodomésticos, modelo 2, lote 1 son: %d\n", inventario[0][0][3][1][0]);
		printf("Las unidades de Europa, sede 2, teléfonos, modelo 3, lote 7 son: %d\n", inventario[1][1][1][2][6]);
		printf("Las unidades de Europa, sede 3, ordenadores, modelo 5, lote 6 son: %d\n", inventario[1][2][2][4][5]);
		printf("Las unidades de América, sede 1, televisores, modelo 4, lote 9 son: %d\n", inventario[0][0][0][3][8]);
		printf("Las unidades de Europa, sede 2, electrodomésticos,  modelo 1, lote 3 son: %d\n", inventario[1][1][3][0][2]);
		//printf examen 
		printf("EL DEL EXAMEN\n");
		printf("Las unidades de Europa, sede 2, televisores, modelo 1, lote 10 son: %d\n", inventario[1][1][0][0][9]);
		//incrementar
		int incremento = 0;
		printf("Cuantas unidades quieres incrementar al ultimo inventario?: ");
		scanf("%d", &incremento);
		inventario[1][1][0][0][9] += incremento;
		printf("Ahora las unidades de Europa, sede 2, televisores, modelo2, lote 10 son: %d\n", inventario[1][1][0][0][9]);


	return 0;
}

