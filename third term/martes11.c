#include <stdio.h>
//ARRAY NUMÉRICOS Y ALFABÉTICOS
int main() {
  int numeros [5], i;
  printf("ARRAY NUMÉRICOS Y ALFABÉTICOS\n");
  printf("Arrays numéricos\n\n");
  numeros[1]=100;
  numeros [2]=200;
  numeros [3]=300;
  numeros [4]=400;
  numeros [5]=500;
  numeros [6]=875;
  numeros [7]=475;

  //printf("%d\n", numeros [1]);
  for(i=1; i<=7; i++) {
    printf("%d\n", numeros[i]);
  }

  printf("\n arrays alfabéticos \n\n");

  char datosPersonales[4][50] = { "Pedro Morales", "Edad: 35 años", "Altura: 175m", "Peso: 65" };
  for (i = 0; i<4; i++) {
    printf("%s\n",datosPersonales[i]);
  }

  //getch();
  return 0;
}
