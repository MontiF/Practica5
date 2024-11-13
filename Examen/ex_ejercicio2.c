#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(){
	char letra_ilegal = 'a';
		//define la lista de palabras y estas tienen como maximo20 caracteres
		char palabras[30][20] = {"casa","arbol","perro","gato","auto","bicicleta","sol","luna","estrella","montaña","rio","mar","tierra","agua","aire","metal","bosque","flor","lluvia","trueno","viento","tormenta","nieve","campo","ciudad","puente","edificio","escalera","pintura","escultura"};

	printf("Palabras sin la letra a: \n");
	for(int i = 0; i < 30; i++){ 

		int contador = 0;
		for (int j = 0; j < strlen(palabras[i]); j++){ 

			if(palabras[i][j] == letra_ilegal){
				contador = 1;
				break; 
			}
		}
		if (contador == 1){
			continue;	//pasa a la proxima palabla 
		}
		else {
			printf("%s\n", palabras[i]);
		}
	}
	char letra_e = 'e';
	printf("Palabras con la letra e: \n");				// letra e
	for(int i = 0; i < 30; i++){ 

		int contadorE = 0;
		for (int j = 0; j < strlen(palabras[i]); j++){ 

			if(palabras[i][j] == letra_e){
				contadorE = 1;
				break; 
			}
		}
		if (contadorE == 1){
			printf("%s ", palabras[i]); 
		}
		else {
			continue;
		}
	}
	char letra_g = 'g';
	printf("\n Palabras con la letra g: \n");				// letra e
	for(int i = 0; i < 30; i++){ 

		int contadorG = 0;
		for (int j = 0; j < strlen(palabras[i]); j++){ 

			if(palabras[i][j] == letra_g){
				contadorG = 1;
				break; 
			}
		}
		if (contadorG == 1){
			printf("%s\n", palabras[i]);
	 
		}
		else {
			continue;
		}
	}
	printf("Palabras con la letra e o g: \n");				// letra e
	for(int i = 0; i < 30; i++){ 

		int contadorEG = 0;
		for (int j = 0; j < strlen(palabras[i]); j++){ 

			if(palabras[i][j] == letra_e && palabras[i][j] == letra_g){
				contadorEG = 1;
				break; 
			}
		}
		if (contadorEG == 1){
			printf("%s\n", palabras[i]); 
		}
		else {
			continue;
		}
	}
	return 0;
}
