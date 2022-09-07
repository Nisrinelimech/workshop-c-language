#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    char Nom [50] ;
    char Prenom [50];
    unsigned int Age ;
    char Sexe [15] ;
    unsigned long Num_tel ;
    printf("Veillez entrer votre nom");
    scanf("%s",& Nom);
    printf("veillez entrer votre prenom");
    scanf("%s",& Prenom);
    printf("veillez entrer votre age");
    scanf("%d",& Age);
    printf("veillez entrer votre sexe");
    scanf("%s",& Sexe);
    printf("veillez entrer votre num_tel");
    scanf("%d",& Num_tel);
    printf("votre nom est :%s\nvotre prenom est:%s\nvotre age est:%d\nvotre sexe est:%s\nvotre num_tel est:%d",Nom, Prenom, Age, Sexe, Num_tel);
    return 0;
}
