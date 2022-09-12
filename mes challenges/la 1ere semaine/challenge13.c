#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("entrer un nombre :");
    scanf("%d", &nombre);
    printf(" le nombre en octal est : %o\n", nombre);
    printf(" le nombre en hexadecimal est : %X\n", nombre);
    return 0;
}
