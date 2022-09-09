#include <stdio.h>
#include <stdlib.h>

int main()
{ printf("challenge 8 : moyenne et somme de 4 nombres\n") ; // le titre du programme
  int n1, n2, n3, n4, somme ;
  float moyenne ;
  printf(" entrez les nombres (n1, n2, n3, n4): ") ;
  scanf("%d,%d,%d,%d",& n1,& n2,& n3,& n4) ;
  somme = n1 + n2 + n3 + n4 ;
  moyenne = somme/4 ;
  printf(" la somme de %d, %d, %d, %d est : %d\n", n1, n2, n3, n4, somme) ;
  printf("la moyenne de %d, %d, %d, %d est : %.2f", n1, n2, n3, n4, moyenne) ;
}
