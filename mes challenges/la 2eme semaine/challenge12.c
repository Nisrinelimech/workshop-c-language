#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hh1, mm1, ss1, hh2, mm2, ss2;
    printf("entrez  le premier instant !\n");
    printf("heures :");
    scanf("%d",& hh1);
    printf("minutes :");
    scanf("%d",& mm1);
    printf("secondes :");
    scanf("%d",& ss1);
    printf("entrez le deuxieme instant !\n");
    printf("heures :");
    scanf("%d",& hh2);
    printf("minutes :");
    scanf("%d",& mm2);
    printf("secondes :");
    scanf("%d",& ss2);
    if( hh1 > hh2 ){
        printf("Le deuxieme instant vient avant le premier");
    } else if ( hh1 < hh2 ){
        printf("Le premier instant vient avant le deuxieme");
    } else if(hh1 == hh2){
       if( mm1 > mm2 ){
          printf("Le deuxieme instant vient avant le premier");
       }else if( mm1 < mm2 ){
          printf("Le premier instant vient avant le deuxieme");
       }else if (mm1 == mm2){
        if(ss1 > ss2){
             printf("Le deuxieme instant vient avant le premier");
        }else if (ss1<ss2){
             printf("Le premier instant vient avant le deuxieme");
        }else if(ss1 == ss2){
             printf("Il s'agit du meme instant");
        }

       }
    }

    return 0;
}
