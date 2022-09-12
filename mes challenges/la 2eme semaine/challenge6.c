#include <stdio.h>
#include <stdlib.h>

int main()
{
     float nombre;
    printf("entrez un nombre :");
    scanf("%f",& nombre);
    if(nombre==0){
        printf("ce nombre est nul");
    }else if(nombre<0){
        printf("ce nombre est negatif");
    } else{
        printf("ce nombre est positif");
    }
    return 0;
}
