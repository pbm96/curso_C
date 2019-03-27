//
// Created by pablo on 27/03/19.
//

#include <stdio.h>

//Funciones
void menu();
int sumar(int numero1,int numero2);
int restar(int numero1,int numero2);
int multiplicar(int numero1,int numero2);
int dividir(int numero1,int numero2);


int main() {

     menu(); //llamada a la funcion

    return 0;
}


void menu(){
    int opcion; //almacenar la opcion del usuario
    int resultado;

    printf("1.Sumar \n");
    printf("2.Restar \n");
    printf("3.Multiplicar \n");
    printf("4.Dividir \n");

    printf("Escribe la opcion que quieras usar: ");
    scanf("%i",&opcion);

    int valor1, valor2;

    printf("\nEscribe el primer numero: ");
    scanf("%i",&valor1);

    printf("\nEscribe el segundo numero: ");
    scanf("%i",&valor2);

    switch (opcion){
        case 1:
            resultado = sumar(valor1, valor2);
            printf("el resultado de %i + %i = %i", valor1, valor2, resultado);

            break;
        case 2:
            resultado = restar(valor1, valor2);
            printf("el resultado de %i - %i = %i", valor1, valor2, resultado);

            break;
        case 3:
           resultado = multiplicar(valor1, valor2);
            printf("el resultado de %i x %i = %i", valor1, valor2, resultado);

            break;
        case 4:
            resultado = dividir(valor1, valor2);
            printf("el resultado de %i / %i = %i", valor1, valor2, resultado);

            break;
    }

}

int sumar(int numero1, int numero2){
    return numero1 + numero2;

}
int restar(int numero1, int numero2){
    return numero1 - numero2;

}
int multiplicar(int numero1, int numero2){
    return numero1 * numero2;

}
int dividir(int numero1, int numero2){
    return numero1 / numero2;

}

