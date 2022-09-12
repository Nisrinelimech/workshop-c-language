#include <stdio.h>
#include <stdlib.h>

int main()
{
  int long annee;
  printf("entrez l annee :");
  scanf("%d", &annee);
  if ( annee%4 == 0 && annee%100 != 0 && annee%400){
  printf("en mois : %ld\n", 12);
  printf("en jours : %ld\n", 366);
  printf("en heures : %ld\n", 366*24 );
  printf("en minutes : %ld\n", 366*24*60 );
  printf("en seconds : %ld", 366*24*60*60 );


  } else  {
  printf("en mois : %ld\n", 12);
  printf("en jours : %ld\n", 365);
  printf("en heures : %ld\n", 365*24 );
  printf("en minutes : %ld\n", 365*24*60 );
  printf("en seconds : %ld", 365*24*60*60 );
  }
    return 0;
}
