//
// Created by pablo on 27/03/19.
//

// tablas de multiplicar
#include <stdio.h>

int main() {

    int tabla;
    int hasta;

    //pedimos al usuario

    printf("escribe el numero de tabla: ");

    scanf("%i", &tabla);

    printf("escribe hasta que numero quieres imprimir: ");

    scanf("%i", &hasta);

    for (int i = 0;i<=hasta;i++){

        printf("\n %i x %i = %i", tabla ,i ,tabla * i);

    }
    return 0;
}


