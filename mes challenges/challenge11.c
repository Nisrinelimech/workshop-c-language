#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("circonference dun rectangle :\n") ;
    float langueur ;
    float largeur ;
    float circonference ;
    printf("entrez la langueur du rectangle : ") ;
    scanf("%f",& langueur);
    printf("entrez la largeur du rectangle : ") ;
    scanf("%f",& largeur) ;
    circonference = 2*(langueur + largeur) ;
    printf("la ciconference de ce rectangle est : %.2f", circonference) ;

    return 0;
}
