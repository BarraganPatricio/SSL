#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int edad;
    char nombre[25];

    printf("%s","Igrese su nombre: ");
    scanf("%s", &nombre);
    printf("%s", "Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Hola %s, usted tiene %d años", nombre, edad);
    return 0;
}