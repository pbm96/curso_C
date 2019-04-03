//
// Created by pablo on 3/04/19.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {


    srand(time(NULL));

    int random = 1+rand() %((50+1) -1);

    int adivinanza;
    int correcto = 0;

    printf(" el numero es: %i",random);

    do{

        printf("\n Introduzca un numeroo: ");

        scanf("%i", &adivinanza);

        if (adivinanza == random) {

            correcto = 1;

            printf("\n adivino el numero!!");
        } else{

            printf("\n El numero que introdujo es incorrecto");

            if (random < adivinanza){

                printf("\n Pista!! el numero es MENOR que %i", adivinanza );
            } else{

                printf("\n Pista!! el numero es MAYOR que %i", adivinanza );

            }
        }

    }while (correcto == 0);



    return 0;
}


