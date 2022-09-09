#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("nombre entier à trois chiffres en ordre inverse\n") ; // le titre du programme
   printf("entrer un nombre entier a trois chiffres :") ;
   char nombre[3];
   scanf("%s", &nombre) ;
   printf("le nombre en ordre inverse est : %s", strrev(nombre));
   return 0;
}
