#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("challenge 5 : affichage temperature") ;
  float T_C ;
  float T_F ;
  printf("entrez la temperature en fahrenheit : ") ;
  scanf("%f",& T_F) ;
  T_C = (T_F - 32)/ 1.8 ;
  printf ("le resultat est : %.2f\n", T_C) ;
if (T_C < 10)
    printf(" tres froid") ;
else if (T_C >= 10 && T_C < 27)
    printf(" froid") ;
else if (T_C >= 27 && T_C < 38)
    printf("chaud") ;
else
    printf("tres chaud") ;

}
