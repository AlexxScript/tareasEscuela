#include <stdio.h> 
int main() {
  int value = 0;
  while (value <= 100) {
    printf("%d, %d, %d\n", value, value*2, value*3);
    value ++;
  }
  return 0;
}

