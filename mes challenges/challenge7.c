#include <stdio.h>
#include <stdlib.h>

int main()
{
 printf("Challenge 7 : Calcule et affichage résultat en format decimal\n"); // le titre du programme
    int x , y ;
    float resultat;
    char opearation , modulus = '%';
    printf("veuillez entrer le premier nombre : ");

    scanf("%d" , &x);

    printf("choisissez une operaation ( + , - , * , / , %c )  : " , modulus);

    scanf(" %c" , &opearation);


     printf("veuillez entrer le deuxieme nombre : ");

    scanf("%d" , &y);

    // calculate the result

    switch(opearation){
        case '+' : resultat = x + y;
        break;
        case '-' : resultat = x - y;
        break;
        case '*' : resultat = x * y;
        break;
        case '/' :
             if(y == 0){
                printf("erreur de devision !");
                exit(0);
             }
             else
                resultat = (float) x / y;

        break;
        case '%' :
             if(y == 0){
                printf("erreur de devision !");
                exit(0);
             }
             else
             resultat =  x % y;
        break;
    }


    printf("         %d   %c   %d   =   %f"  , x , opearation , y , resultat);

    return 0;
}
