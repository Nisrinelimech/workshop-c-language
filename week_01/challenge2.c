#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("challenge 2 : la convertion de °F au °C\n ") ; // le titre du programme
    float T_F ; // la temperature en farhenheit
    float T_C ; // la temperature en celsius
    printf ("entrez la temperature en farhenheit : ") ;
    scanf ("%f",& T_F) ; // input de la T_F par lutilisateur a trzavers le clavier
    T_C = (T_F - 32)/ 1.8 ; // calcul de la temperature en degre celsius a travers la relation T_C = (T_F - 32)/1.8
    printf ("le resultat est %f:", T_C) ;
    }
