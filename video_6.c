//
// Created by pablo on 3/04/19.
//

#include <stdio.h>
#include <string.h>


struct alumno{

    char nombre[20];
    int edad;
    float ingles, mates, historia, media;

};

int main() {
    struct alumno alumnos[30];

    float menor = 11, mayor = 0;

    char alumno_mayor_media[20];
    char alumno_menor_media[20];

    int cantidad_alumnos;

    printf("\n introducir cantidad de alumnos: ");
    scanf("%i", &cantidad_alumnos);

    //bucle para dar valor a las variables de la estructura

    for (int i = 0;i < cantidad_alumnos ; i++) {

        //limpiar memoria
        fflush(stdin);

        printf("\n Alumno %i Nombre alumno: ", i);
        scanf("%s", alumnos[i].nombre);

        printf("\n Alumno %i Edad alumno: ", i);
        scanf("%i", &alumnos[i].edad);

        printf("\n Alumno %i Calificacion Ingles: ", i);
        scanf("%f", &alumnos[i].ingles);

        printf("\n Alumno %i Calificacion Mates: ", i);
        scanf("%f", &alumnos[i].mates);

        printf("\n Alumno %i Calificacion Historia: ", i);
        scanf("%f", &alumnos[i].historia);

        alumnos[i].media = (alumnos[i].ingles + alumnos[i].mates + alumnos[i].historia)/3;

        if (alumnos[i].media > mayor){
            mayor = alumnos[i].media;

            strcpy(alumno_mayor_media, alumnos[i].nombre);

        }

        if (alumnos[i].media < menor){
            menor = alumnos[i].media;

            strcpy(alumno_menor_media, alumnos[i].nombre);

        }


    }

    for (int i = 0; i <cantidad_alumnos ; ++i) {

        printf("\n Alumno %i - Nombre %s - Edad %i - Ingles %.2f - Mates %.2f - historia %.2f - Media %.2f",i,alumnos[i].nombre, alumnos[i].edad, alumnos[i].ingles, alumnos[i].mates, alumnos[i].historia, alumnos[i].media);

    }

    printf("\n Alumno con mas media: %s", alumno_mayor_media);
    printf("\n Alumno con menos media: %s", alumno_menor_media);


    return 0;
}


