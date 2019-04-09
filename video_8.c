//
// Created by pablo on 9/04/19.
//

#include <stdio.h>
#include <string.h> // comparar con strcmp y strcpy

void menu();
void detalle_compra();

float suma_total = 0;
float lista_precios[]={50, 10, 20, 0};
char cupon [15]= "hola";
char cupon_user[15];

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


    do{

        printf("\n Introduzca numero de articulo: ");
        scanf("%i", &opcion);
        suma_total += lista_precios[opcion];

    }while (opcion !=3);

    if (opcion == 3){
        detalle_compra();
    }

}

void detalle_compra(){

    int tieneCupon;
    float suma_descuento;


    printf("\n Tienes cupon descuento Si = 1 no = 0: ");
    scanf("%i", &tieneCupon);

    if(tieneCupon == 0){
        printf("\n El precio total es: %.2f", suma_total);
    }else{

        printf("\n Introduzca nombre descuento: ");
        scanf("%s",&cupon_user );


        if (strcmp(cupon, cupon_user) == 0){ //coinciden los cupones

            suma_descuento = suma_total * 0.90;
            printf("\n Pagaras %.2f en vez de %.2f", suma_descuento, suma_total);

        }else{
            printf("\n el cupon es invalido, pagaras el total: %.2f", suma_total);
        }


    }
}

