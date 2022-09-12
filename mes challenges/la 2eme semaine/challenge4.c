#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("calculer les solutions possible d’une equation 2eme degre\n");
    float x,y,z;
    printf("entrez la valeur de x :");
    scanf("%f", &x);
    printf("entrez la valeur de y :");
    scanf("%f", &y);
    printf("entrez la valeur de z :");
    scanf("%f", &z);
    float delta = pow( y, 2)- 4*x*z ;
    if(delta == 0){
        printf("la solution est : %f", -y/(2*x));
    } else if(delta > 0){
        printf("les solutions sont : %f et %f", (-y-sqrt(delta))/(2*x), (-y+sqrt(delta))/(2*x) );
    } else if(delta < 0){
        printf("aucune solution!");
    }

    return 0;
}
