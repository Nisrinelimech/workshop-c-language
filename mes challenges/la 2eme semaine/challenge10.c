#include <stdio.h>
#include <stdlib.h>

int main()
{
   int jour, mois, annee;

    printf("entrez le jour :");
    scanf("%d",& jour);
    printf("entrez le mois :");
    scanf("%d",& mois);
    printf("entrez l'annee :");
    scanf("%d",& annee);
    if( jour <= 31 && jour >= 1){
        printf("%d/", jour);
    }else printf("invalide/");

    if( mois == 1){
        printf("janvier");
    }else if ( mois == 2){
        printf("fevrier");
    }else if ( mois == 3){
       printf("mars");
    }else if ( mois == 4){
        printf("avril");
    }else if ( mois == 5){
       printf("may");
    }else if ( mois == 6){
       printf("juin");
    }else if ( mois ==7){
        printf("juillet");
    }else if ( mois == 8){
       printf("aout");
    }else if ( mois ==9){
       printf("septembre");
    }else if ( mois ==10){
       printf("octobre");
    }else if ( mois ==11){
       printf("novembre");
    }else if ( mois ==12){
       printf("decembre");
    } else printf("invalide");
    printf("/%d", annee);

    return 0;
}
