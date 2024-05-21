#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float x = 0;
  float y = 0;

  printf("Ingrese la coordenada X y Y: ");

  if ((scanf("%f %f", &x, &y) < 0 || x > 7 || y < 0 || y > 8)) {
    printf("La coordenada X o Y está fuera del rango.\n");
    return 1;
  } else {
    printf("Coordenadas válidas: (%f, %f)\n", x, y);
    if (x <= 3.5 && y <= 3) {
      printf("El punto se encuentra en Dormitorio 2\n");
    } else if (x <= 3.5 && (y > 3.0 && y <= 4.5)) {
      printf("El punto está en baneiro \n"); 
    }else if (x <= 4 && (y > 4.5 && y <= 8)) {
      printf("El punto está en Dormitorio 1 \n"); 
    }else if ((x > 3.5 && x<=7) && (y >= 0 && y <= 3.5)) {
      printf("El punto está en la Sala \n"); 
    }else if ((x > 3.5 && x<=7) && (y >3.5 && y <= 6.5)) {
      printf("El punto está en Cocina \n"); 
    }else if ((x > 3.5 && x<=7) && (y > 6.5 && y <= 8)) {
      printf("El punto está en Area de servicio \n"); 
    }else{
      printf("No se encuentra el punto \n"); 
    }
  }

  return 0;
}
