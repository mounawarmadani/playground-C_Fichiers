#include <stdio.h>
#include <stdlib.h>
#include "nbrstruct.h"



int main() {
  
  char nom_fichier[35];
  int n;
  scanf("%s",nom_fichier);
  n=getsize(nom_fichier);
  printf("%d\n",n);

  return 0;
}
