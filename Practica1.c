#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float l, m, x, j, v, s, d;		
	float suma, promedio; 


	char nombre_dias[7][11] = {"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};	//un array en el cual se guardan cadenas de caracteres
	float dias[7] = {l, m, x, j, v, s, d};	//un array con los dias de la semana
	for(int i = 0; i<7;i++){
		printf("¿Que temperatura habia el %s?\n",nombre_dias[i]);		//un printf que cambia la palabra del dia gracias al array anterior
		scanf("%f", &dias[i]);							//un scanf que cambia la variable declarada dependiendo de las veces que haga el bucle
	}

	for(int i = 0; i < 7; i++){
		suma += dias[i];						//calcula el promedio 
	} promedio = suma / 7;
	
	printf("La temperatura promedio es: %f\n", promedio);

	
	
	return 0;

}
