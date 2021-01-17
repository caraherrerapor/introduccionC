#include<stdio.h>

int main(){

    char sexo = 'M';
    float CP = 2764;
    float HP = 159;
    double Peso = 183.0;
    float Altura = 2.32;
    double Caramelos = 266;

    printf("%c\n",sizeof(sexo));
    printf("%f\n",sizeof(CP));
    printf("%f\n",sizeof(HP));
    printf("%lf\n",sizeof(Altura));
    printf("%lf\n",sizeof(Caramelos));

    return 0;
}