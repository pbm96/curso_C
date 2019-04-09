//
// Created by pablo on 9/04/19.
//

#include <stdio.h>
#include <string.h> // comparar con strcmp y strcpy

void menu();

float suma_total;
float lista_precios[]={50, 10, 80, 0};

int main() {

    menu();
    return 0;
}


void menu(){
    int opcion;

    printf("\n0. Monitor \t 50€ ");
    printf("\n1. Teclado \t 10€ ");
    printf("\n2. Raton \t 20€ ");
    printf("\n3. Finalizar la compra");

    printf("\n introducir numero de articulo");
    scanf("%i", &opcion);

    do{

        printf("\n ");
    }while (opcion !=3);

}

