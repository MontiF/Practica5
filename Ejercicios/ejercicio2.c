#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(){
	char letra_ilegal = 'a';
		//define la lista de palabras y estas tienen como maximo50 caracteres
		char lista[7][50] = {"pera","tubo","arco","estuche","tmux","fornite","armario"};

	printf("Palabras sin la letra a: \n");
	for(int i = 0; i < 7; i++){ 

		int contador = 0;
		for (int j = 0; j < strlen(lista[i]); j++){ 

			if(lista[i][j] == letra_ilegal){
				contador = 1;
				break; 
			}
		}
		if (contador == 1){
			continue;	//pasa a la proxima palabla 
		}
		else {
			printf("%s\n", lista[i]);
		}
	}

	return 0;
}
