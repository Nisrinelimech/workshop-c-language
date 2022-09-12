#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("challenge 9 : distance entre deux points\n") ;
   float x1, y1 ;
   float x2, y2 ;
   float distance ;
   printf("entrez les coordonees du premier point (x1, y1) : ") ;
   scanf("%f,%f",& x1,& y1) ;
   printf("entrez les coordonnees du deuxieme point (x2, y2) :") ;
   scanf("%f,%f",& x2,& y2) ;
   distance = sqrt( pow( (x2 - x1), 2) + pow( (y2 - y1), 2)) ;
   printf("la distance entre les deux points de coordonnees (%f,%f) et (%f,%f) est %f:", x1, y1, x2, y2, distance) ;
    return 0;
}
