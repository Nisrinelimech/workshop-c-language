#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("challenge 6 : la convertion de °F au °C\n ") ; // le titre du programme
    float T_F ; // la temperature en farhenheit
    float T_C ; // la temperature en celsius
    printf ("entrez la temperature en farhenheit : ") ;
    scanf ("%f",& T_F) ;
    T_C = (T_F - 32)/ 1.8 ;
    printf ("le resultat est %f:", T_C) ;
    return 0;
}
