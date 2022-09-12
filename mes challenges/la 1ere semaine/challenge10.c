#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("challenge 10 : la circonference dun cercle :\n") ;
   const float pi = 3.14 ;
   float rayon ;
   float circonference ;
   printf("entrez le rayon du cercle : ");
   scanf("%f",& rayon) ;
   circonference = 2 * pi * rayon ;
   printf("la circonference de ce cercle est : %f", circonference) ;
    return 0;
}
