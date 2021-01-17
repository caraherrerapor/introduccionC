#include<stdio.h>

int main(){
	int temporadas;
	int capitulos;
	double duracion,intro;
	double total;

	printf("¿Cuantas temporadas tiene?\n");
	scanf("%i",&temporadas);

	printf("¿Cuantos capitulos de media cada temporada?\n");
	scanf("%i",&capitulos);

	printf("¿Cuantos minutos duran aproximandamente los capitulos?\n");
	scanf("%lf",&duracion);
	
	printf("¿Y su intro?\n");
	scanf("%lf",&intro);
	
	total = temporadas*capitulos*(duracion-intro)/60;
	
	printf("¡En total has invertido unas %lf\n",total);

	return 0;
}
