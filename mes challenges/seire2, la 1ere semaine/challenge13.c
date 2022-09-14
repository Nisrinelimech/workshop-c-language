#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("entrez les coordonnees de la premiere extremite !\n");
    printf("x1 :");
    scanf("%d",& x1);
    printf("y1 :");
    scanf("%d",& y1);
    printf("entrez les coordonnees de la deuxieme extremite !\n");
    printf("x2 :");
    scanf("%d",& x2);
    printf("y2 :");
    scanf("%d",& y2);
    printf("entrez les coordonnees d'un point !\n");
    printf("x3 :");
    scanf("%d",& x3);
    printf("y3 :");
    scanf("%d",& y3);
    int ab = sqrt(pow((x2 - x1),2)+ pow((y2 - y1),2));
    int am = sqrt(pow((x3 - x1),2)+ pow((y3 - y1),2));
    int mb = sqrt(pow((x2 - x3),2)+ pow((y2 - y3),2));
    if ( am + mb == ab){
        printf("ce point se trouve sur le segment !");
    }else  printf("ce point ne se trouve pas sur le segment !");
    return 0;
}
