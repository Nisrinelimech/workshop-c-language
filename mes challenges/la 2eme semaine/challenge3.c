#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("la somme de deux valeurs entieres:\n");
     int x,y;
     printf("entrez la valeur de x :");
     scanf("%d", &x);
     printf("entrez la valeur de y :");
     scanf("%d", &y);
     printf("la somme :%d\n", x+y);
     int somme = x+y;
     if(x==y){
        printf("le triple de la somme : %d", somme*3);
     }
    return 0;
}
