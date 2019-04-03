//
// Created by pablo on 3/04/19.
//

#include <stdio.h>



struct alumnos{

    char nombre[20];
    int edad;
    float ingles, mates, historia;

};

int main() {
    struct alumnos alumno[30];

    int cantidad_alumnos;

    printf("\n introducir cantidad de alumnos: ");
    scanf("%i", &cantidad_alumnos);

    //bucle para dar valor a las variables de la estructura

    for (int i = 0;i < cantidad_alumnos ; i++) {

        //limpiar memoria
        fflush(stdin);

        printf("\n Alumno %i Nombre alumno: ", i);
        scanf("%s", alumno[i].nombre);

        printf("\n Alumno %i Edad alumno: ", i);
        scanf("%i", &alumno[i].edad);

        printf("\n Alumno %i Calificacion Ingles: ", i);
        scanf("%f", &alumno[i].ingles);

        printf("\n Alumno %i Calificacion Mates: ", i);
        scanf("%f", &alumno[i].mates);

        printf("\n Alumno %i Calificacion Historia: ", i);
        scanf("%f", &alumno[i].historia);


    }

    for (int i = 0; i <cantidad_alumnos ; ++i) {

        printf("\n Alumno %i - Nombre %s - Edad %i - Ingles %.2f - Mates %.2f - historia %.2f",i,alumno[i].nombre, alumno[i].edad, alumno[i].ingles, alumno[i].mates, alumno[i].historia);

    }



    return 0;
}


