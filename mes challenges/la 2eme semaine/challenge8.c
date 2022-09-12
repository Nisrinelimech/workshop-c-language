#include <stdio.h>
#include <stdlib.h>

int main()
{
     float moyenne;
    printf("entrez la moyenne :");
    scanf("%f",& moyenne);
    if( moyenne < 10 ){
        printf("recale ");
    }else if(moyenne >= 10 && moyenne < 12){
       printf("mention: passable");
    }else if(moyenne >= 12 && moyenne < 14){
       printf("mention: assez bien");
    }else if(moyenne >= 14 && moyenne < 16){
       printf("mention: bien");
    }else if(moyenne >= 16 ){
       printf("mention: tres bien");
    }
    return 0;
}
