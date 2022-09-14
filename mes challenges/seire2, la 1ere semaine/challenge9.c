#include <stdio.h>
#include <stdlib.h>

int main()
{
   char caractere;
   printf("entrez un alphabet :");
   scanf("%c", &caractere);
   if( caractere >= 'a' && caractere <= 'z'){
    printf("c'est un alphabet miniscule !");
   }else if ( caractere >= 'A' && caractere <= 'Z'){
    printf("c'est un alphabet majuscule !");
   }else { printf("ce n'est pas un alphabet!");
   }
    return 0;
}
