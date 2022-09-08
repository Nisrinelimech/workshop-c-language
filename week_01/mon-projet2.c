#include <stdio.h>
#include <stdlib.h>

int main()
{ printf(" challenge 2: Conversion du °F au °c\n"); // le titre du programme
float T_F ; // la température en farhenheit
float T_C ; // la température en celsius
printf( "entrez la temperature en farhenheit: ") ;
scanf("%f", & T_F); // input de la T_F par lutilisateur à travers le clavier
T_C = (T_F - 32)/ 1.8 ; // calculer la température en farenheit à travers la relation T_C = (T_F - 32)/ 1.8
printf("affichage du résultat : %f",T_C ) ;
}
