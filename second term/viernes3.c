#include <stdio.h>

int main(){
  char palabra[20];
  printf("Digite una palabra: ");
  fgets(palabra,sizeof(palabra),stdin);
  printf("Palabra: %s",palabra);
  return 0;

}

