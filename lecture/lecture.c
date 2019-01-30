#include <stdio.h>
#include <stdlib.h>


struct complex{
	float real;
	float img;
};

int main() {
  
  char nom[20];
  int n;
  struct complex s;
  scanf("%s",nom);
 
  
  
  printf("n = %d s.real =  %f s.img  = %f\n",n,s.real,s.img);

  return 0;
}
