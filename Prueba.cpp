#include <stdio.h>

int main()
{
    char nombre[200];
    printf("hola mundo\n");
    printf("Nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s",nombre);

    return 0;
}
