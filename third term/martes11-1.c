#include <stdio.h>
#include <stdlib.h>

#define SEMANA 7

int main() {
  float ventas[SEMANA] = {650.40,890.50,578.45,1200.00,748.65,587.50,890.60};
  float total = 0;
  int i;
  printf("Ventas de la semana\n");
  printf("-----------------------\n");
  for (i=0;i<SEMANA;i++) {
    total += ventas[i];
    printf("$%.2f\n",ventas[i]);
  }
  printf("-----------------------\n");
  printf("Total de ventas: $%.2f\n",total);
  return 0;
}
