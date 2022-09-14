#include <stdio.h>
#include <stdlib.h>

int main()
{
   char caractere;
      printf("entrez un caractere :");
      scanf("%c", &caractere);
      switch(caractere){
      case 'a':
        printf("c'est une voyelle");
        break;
      case 'e':
        printf("c'est une voyelle");
        break;
      case 'i':
        printf("c'est une voyelle");
        break;
      case 'u':
        printf("c'est une voyelle");
        break;
      case 'o':
        printf("c'est une voyelle");
        break;
      case 'y':
        printf("c'est une voyelle");
        break;
      default :
        printf("ce n'est pas une voyelle");
      }
    return 0;
}
