#include<stdio.h>
#define dim 3

int main(){

    int datos[dim];
    datos[0]=5;
    printf("Introduce un numero: ");
    scanf("%d",&datos[1]);

    datos[2]= 2*(datos[0]+datos[1]);
    printf("el primer elemento de la tabla es %d\n",datos[0]);
    printf("el tercer elemento de la tabla es %d\n",datos[dim]);

//    printf("los elementos de la tabla son %d\n",datos);

     
    return 0;
}