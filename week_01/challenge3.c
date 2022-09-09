#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("conversion du metre au mile\n") ; // le titre du programme
    float d_metre ; // la distance en metre
    float d_mile ; // la distance en mile
    printf ("entrer la distance en metre : ") ;
    scanf ( "%f",& d_metre ) ;
    d_mile = d_metre*1609 ; // calcul de la distance en mile
    printf (" le resulat est: %f", d_mile);
}
