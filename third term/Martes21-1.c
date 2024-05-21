#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *archivo;
  char caracter;
  archivo = fopen("archivo.txt", "a");
  printf("\n\nIntroduce texto sobre el archivo:\n");
  while((caracter=getchar())!= '\n'){
    printf("%c",fputc(caracter,archivo));
  }
  fclose(archivo);
  getch();
  return 0;
}
