#include <stdio.h>
#include <stdlib.h>
#define DIAS 7
#define SEMANAS 4
int main() {
  float ventasMes[DIAS] [SEMANAS]={
    1480, 880, 700, 2100,3000,400, 200, 
    180, 1100, 500, 500, 506, 2000, 700, 
    458, 3000, 1000, 800, 180, 380, 1300, 
    300, 400, 2200, 1000, 300, 80, 700
  };
  float totales [SEMANAS]={0.0, 0.0, 0.0, 0.0};
  float granTotal=0;
  int f, c, t=0; 
  printf("Ventas de cuatro semanas\n");
  for(f=0; f<DIAS; f++) {
    for(c=0;c<SEMANAS; c++) {
      totales[c] += ventasMes[f][c];
      printf("$%.2f ", ventasMes[f][c]);
    }
    printf("\n");
  }
  printf("------------------------------\n");
  for (t = 0;t<SEMANAS; t++) {
    printf("$%.2f\n",totales[t]);
    granTotal += totales[t];
  }
  printf("\n\nTotal del mes: $%.2f",granTotal);
  return 0;
}
