#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *archivo;
  char caracter;
  archivo = fopen("archivo.txt", "r");
  if(archivo == NULL){
    printf("error en la apertura del archivo \n");
  } else {
    printf("El contenido del archivo es: \n\n");
    while(feof(archivo)==0){
      caracter = fgetc(archivo);
      printf("%c",caracter);
    }
  }
  fclose(archivo);
  getch();
  return 0;
}
