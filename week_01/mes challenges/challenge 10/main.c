#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265359

int main()
{
   printf("challenge 10 : la circonference dun cercle :\n") ;
   float rayon ;
   float circonference ;
   printf("entrez le rayon du cercle : ");
   scanf("%f",& rayon) ;
   circonference = 2 * pi * rayon ;
   printf("la circonference de ce cercle est : %f", circonference) ;
}
