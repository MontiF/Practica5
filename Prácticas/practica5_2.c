#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	int estudiantes;
	double suma = 0;
	int aprobados = 0;
	int suspensos = 0;

	printf("Ingrese una cantidad de estudiantes:");
	scanf("%d", &estudiantes);

	double calificacion[estudiantes];
	double maxima = 0;
	double minima = 20;
	int persona_maxima;
	int persona_minima;



	for(i = 0; i < estudiantes; i++){
		int real = i + 1;
		printf("Pon la nota del estudiante %d:", real);
		scanf("%lf", &calificacion[i]);
		printf("nota %lf estudiante %d\n", calificacion[i], real);
		suma = suma + calificacion[i];
		
		if ( calificacion[i] >= 5){
			aprobados = aprobados + 1;
		} else {
			suspensos = suspensos + 1;
		}
		
		if ( calificacion[i] >= maxima) {
			maxima = calificacion[i];
			persona_maxima = i + 1;
		}
		
		if ( calificacion[i] <= minima) {
			minima = calificacion[i];
			persona_minima = i + 1;
		}
} 

		double promedio = suma / estudiantes;
		printf("El promedio de notas: %.2lf\n", promedio);

	printf("Número de estudiantes aprobados: %d\n", aprobados);
	printf("Número de estudiantes suspendidos: %d\n", suspensos);
	printf("Nota máxima: %.2lf estudiante número: %d\n", maxima, persona_maxima);
	printf("Nota mínima: %.2lf estudiante número: %d\n", minima, persona_minima);

return 0;
}
