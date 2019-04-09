//
// Created by pablo on 9/04/19.


//

#include <stdio.h>


void menu();
void depositar(float cantidad);
void retirar(float cantidad);


float saldo_actual = 0;
float cantidad;
int main() {

    menu();


    return 0;
}


void menu(){
    int opcion; // variable para almacenar la opcion

    printf("\n 1. Consultar saldo");
    printf("\n 2. Depositar");
    printf("\n 3. Retirar");
    printf("\n 4. Salir");

    printf("\n Introduce tu opcion: ");
    scanf("%i", &opcion);

    switch (opcion){
        case 1:
            printf("\n Tu saldo actual es de %.2f ",saldo_actual);
            menu();
            break;

        case 2:
            printf("\nCuanto dinero quieres depositar: ");
            scanf("%f",&cantidad);

            depositar(cantidad);
            break;

        case 3:
            printf("\nCuanto dinero quieres retirar: ");
            scanf("%f",&cantidad);

            retirar(cantidad);
            break;

        case 4:
            printf("\n Hasta pronto!!");
            break;

        default:
            printf("\n Opción incorrecta");

            menu();

    }


}

void depositar(float cantidad){

    saldo_actual = saldo_actual + cantidad;

    printf( "\nTu cantidad es: %.2f \n", saldo_actual);

    menu();
}

void retirar(float cantidad){

    if (saldo_actual >= cantidad) {

        saldo_actual -= cantidad;

        printf("\nTu cantidad es: %.2f \n", saldo_actual);

        menu();
    }else{

        printf("\nTu cantidad es menor que tu saldo actual: %.2f \n", saldo_actual);
        menu();

    }
}



