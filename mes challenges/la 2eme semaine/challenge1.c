#include <stdio.h>
#include <stdlib.h>

int main()

{
     printf("paire ou impaire"); //le titre du programme
     int nombre;
     printf("entrez un nombre :");
     scanf("%d", &nombre);
     if( nombre % 2 == 0 ){
        printf(" ce nombre est paire ");
     }
     else {
        printf("ce nombre est impaire");
    }
    return 0;
}
