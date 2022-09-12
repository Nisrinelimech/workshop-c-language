#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
   printf("entrez un alphabet :");
   scanf("%c",& caractere);
   if( caractere <= 'Z' && caractere >= 'A' ){
    printf("cet alphabet est majuscule");
   }else{
    printf("cet alphabet n'est pas majuscule");
   }
    return 0;
}
