// #include <stdio.h>

// int sum;

// void suma(int x) {
//   //printf("la suma de x: %d y sum:  %d es: %d\n", x, sum, x + sum);
//   sum = sum + x;
//   return;
// }

// void intercambio(int *a, int *b) {
//   if (*a > *b) {
//     int inter;
//     inter = *a;
//     *a = *b;
//     *b = inter;
//   }
//   return;
// }

// int main(void) {
//   int contador, a = 9, b = 0;
//   sum = 0;
//   intercambio(&a, &b);
//   printf("El valor de &a es: %p, *a es:  %d y a es: %d\n",&a,*(&a),a);
//   for (contador = a; contador <= b; contador++) {
//     printf("la suma de contador: %d y sum:  %d es: %d\n", contador, sum,contador + sum);
//     suma(contador);
//   }
//   printf("%d\n", sum);
//   return (0);
// }

#include <stdio.h>

int main(void) {
    // your code goes here
    int a = 5;
    int *b = &a;
    printf("a = %d; b = %d\n", a, *b); // (1)

    a = 6;
    printf("a = %d; b = %d\n", a, *b); // (2)
    return 0;
}