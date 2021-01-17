#include<stdio.h>

int main(){
	double euros;
	double dolares;

	printf("introduzca cantidad en dolares\n");
	scanf("%lf",&dolares);

	euros = dolares*0.859;
	printf("%lf dolares son %o euros.\n",dolares,euros);

	return 0;
}
