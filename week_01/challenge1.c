#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf ("Challenge 1 : Affichage Informations\n") ;
  char nom[20], prenom[20], sexe[15], num_tel[15] ; // declaraction des variables
  int age ; // declaration des variables
  printf ("veillez entrer votre nom: ") ;
  scanf ("%s",& nom) ;
  printf ("veillez entrer votre prenom: ") ;
  scanf ("%s",& prenom) ;
  printf ("veillez entrer votre sexe: ") ;
  scanf ("%s",& sexe) ;
  printf ("veillez entrer votre num_tel: ") ;
  scanf ("%s",& num_tel) ;
  printf ("veillez entrer votre age: ") ;
  scanf ("%d",& age) ;
  printf ("votre nom est :%s\n votre prenom est :%s\n votre sexe est:%s\n votre num_tel est :%s\n votre age est :%d", nom, prenom, sexe, num_tel, age) ;
}
