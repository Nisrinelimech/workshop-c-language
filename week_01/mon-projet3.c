#include <stdio.h>
#include <stdlib.h>

int main()
{ printf( "challenge3: conversion du mille au km" ); // le titre du challenge
float d_m ; // la distance en kmetre
float d_mille; // la distance en mille
printf( "entrez la distance en mille : ") ;
scanf( " %f", &d_mille) ;
d_m = d_mille/ 1000*1.609 ; // calcul de la distance en metre
printf ("affichage du resultat : %f", d_m);
}
