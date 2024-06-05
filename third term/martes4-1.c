#include <stdio.h>

void main(void)
{
    int counter = 10;
    int *iptr; // Declarar valor del puntero

    iptr = &counter; // Asignar la dirección
    printf("Dirección en iptr %x Valor en *iptr %d\n", iptr, *iptr);

    *iptr = 25; // Cambiar el valor en la memoria

    printf("Valor de counter %d\n", counter);
}
