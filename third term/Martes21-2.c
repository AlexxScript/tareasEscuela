#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *archivo;
  if(remove("archivo.txt")==-1){
    printf("error al eliminar el archivo de texto\n");
  }else{
    printf("archivo eliminado con exito\n");
  }
  fclose(archivo);
  getch();
  return 0;
}
