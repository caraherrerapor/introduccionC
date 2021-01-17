#include<stdio.h>

int main(){

    int tiempo1,
        tiempo2,
        tiempo3,
        tiempo4,
        tiempo5;
    double costo1,
           costo2,
           costo3,
           costo4,
           costo5,
           total;




    printf("¿Cuántas horas le has echado al primero de ellos? ");
    scanf("%i",&tiempo1);
    printf("¿Y cuánto te costó?");
    scanf("%lf",&costo1);

    printf("¿Cuántas horas le has echado al segundo? ");
    scanf("%i",&tiempo2);
    printf("¿Y cuánto te costó?");
    scanf("%lf",&costo2);

    printf("¿Cuántas horas le has echado al tercero? ");
    scanf("%i",&tiempo3);
    printf("¿Y cuánto te costó?");
    scanf("%lf",&costo3);

    printf("¿Cuántas horas le has echado al cuarto? ");
    scanf("%i",&tiempo4);
    printf("¿Y cuánto te costó?");
    scanf("%lf",&costo4);

    printf("¿Cuántas horas le has echado al quinto? ");
    scanf("%i",&tiempo5);
    printf("¿Y cuánto te costó?");
    scanf("%lf",&costo5);

    total = (costo1/tiempo1 + costo2/tiempo2 + costo3/tiempo3 + costo4/tiempo4 + costo5/tiempo5) / 5;


    printf("¡Los últimos 5 juegos te han salido a %lf euros la hora!",total);
    

    return 0;

  
}
