#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("nombre entier à trois chiffres en ordre inverse\n") ;
   int nombre ;
   printf("entrez un nombre entier a trois chiffres:") ;
   scanf("%d",& nombre) ;
   int chiffre1, chiffre2, chiffre3 ;
   chiffre1 = nombre/100 ;
   chiffre2 = nombre/10 - chiffre1*10 ;
   chiffre3 = nombre - chiffre1*100 - chiffre2*10;
   printf("linverse du %d est : %d%d%d", nombre, chiffre3, chiffre2, chiffre1 ) ;
}
