#include <stdio.h>
#include <stdlib.h>


struct complex{
	float real;
	float img;
};

int main() {
  
  char nom_fichier[20];
  int n; 
  struct complex s;
  scanf("%s",nom_fichier);
 
  // ecrire le code pour lire la structure ici
  // le nombre d'enregistrements lu suite à la lecture est récupéré dans la variable n
  
  printf("n = %d s.real =  %f s.img  = %f\n",n,s.real,s.img);

  return 0;
}
