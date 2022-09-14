#include <stdio.h>
#include <stdlib.h>

int main()
{
 srand(time(0));

    int num = (rand()%7);
    switch(num){
     case 1 :     printf("lundi");
      break;
     case 2 :     printf("mardi");
      break;
     case 3 :     printf("mercredi");
      break;
     case 4 :     printf("jeudi");
       break;
     case 5 :     printf("vendredi");
      break;
     case 6 :     printf("samedi");
      break;
     case 7 :     printf("dimanche");
      break;

    }
    return 0;
}
