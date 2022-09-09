#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("challenge 4 : la conversion du mile au metre\n") ; // le titre du programme
    float d_metre ; // la distance en metre
    float d_mile ; // la distance en mile
    printf("entrez la distance en mile : ") ;
    scanf("%f",& d_mile) ;
    d_metre = d_mile/ 1609 ; // calcul de la distance en metre
    printf("le resultat est : %f", d_metre) ;
}
