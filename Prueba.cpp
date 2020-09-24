#include <stdio.h>

int main()
{
    char nombre[200];
    unsigned int edad;

    printf("hola mundo\n");
    printf("Nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s",nombre);
    printf("Edad:\n");
    scanf("%u",&edad);
    printf("Vas a cumplir: %u \n", edad + 1);

    return 0;
}
