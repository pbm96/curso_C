//
// Created by pablo on 27/03/19.
//

#include <stdio.h>
#include <unistd.h>
int main() {

    int tipo;
    int cantidad;
    printf("1.Horas\n");
    printf("2.Minutos\n");
    printf("3.Segundos\n");

    printf("Introduce tu opcion para parar el cronometro: \n");
    scanf("%i",&tipo);

    printf("Introduce la cantidad para parar el cronometro: ");
    scanf("%i",&cantidad);

    for (int hora = 0; hora <=24 ; hora++) {

        for (int minuto = 0; minuto < 60 ; minuto++) {

            for (int segundo = 0; segundo < 60 ;segundo++) {

                printf("%.2i:%.2i:%.2i \r",hora, minuto, segundo);

                sleep(1);
                fflush(stdout); // esto se pone por el buffer

                if(tipo ==1 && cantidad<=hora){

                    printf("cronometro finalizado");

                    return 0;

                }else if(tipo ==2 && cantidad<=minuto){

                    printf("cronometro finalizado");

                    return 0;

                } else if(tipo ==3 && cantidad<=segundo){

                    printf("cronometro finalizado");

                    return 0;

                }


            }

        }

    }




    return 0;
}


