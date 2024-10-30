#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float suma, promedio; 


	char nombre_dias[7][11] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};	//un array en el cual se guardan cadenas de caracteres
	float dias[7] ;	//un array con los dias de la semana
	for(int i = 0; i<7;i++){
		printf("¿Que temperatura habia el %s?\n",nombre_dias[i]);		//un printf que cambia la palabra del dia gracias al array anterior
		scanf("%f", &dias[i]);							//un scanf que cambia la variable declarada dependiendo de las veces que haga el bucle
	}

	for(int i = 0; i < 7; i++){
		suma += dias[i];						//calcula el promedio 
	} promedio = suma / 7;


	printf("La temperatura promedio de la semana es: %.1fCº\n", promedio);

	
	//calcula maxima
	int dia_maxima;
	int dia_minimo;
	float minima = dias [0];
	float maxima = dias[0];   
	for(int i = 0; i < 7; i++){
		if(dias[i] >= maxima){				//si la avariable maxima es menor o = a dias[i] entonces la variable maxima sera igual a dias[i]
			maxima = dias[i];			// y guardaremos la [i] para mas tarde indicar el dia
			dia_maxima = i;	
	}
		if(dias[i] <= minima){				//si la variable minima es mayor o = a dias[i] entonces la variable maxima sera igual a dias[i]
			minima = dias[i];			// y guardaremos la [i] para más tarde indicar día
			dia_minimo = i;
		}
	} 
	printf("Temperatura máxima: %.1fCº el día %s \n", maxima, nombre_dias[dia_maxima]);
	printf("Temperatura mínima: %.1fCº el día %s \n", minima, nombre_dias[dia_minimo]);

	//numero de dias con temperaturas superiores al promedio
	int contador_mayores = 0;
	for(int i = 0; i < 7; i++){
		if(dias[i] > promedio){
			contador_mayores++;
		}
		
	}printf("Número de días con temperaturas superiores al promedio: %d\n", contador_mayores);

	//dias con temperaturas por debajo del promedio
			printf("Días con temperaturas por debajo del promedio:\n");
	for(int i = 0;i < 7; i++){
		if(dias[i] < promedio){
			printf("%s: %.1fCº\n", nombre_dias[i], dias[i]);
		}
	}
	
	

	return 0;

}
