#include <stdio.h>

int sum;

void suma(int x)
 
{
  //printf("la suma de x: %d y sum:  %d es: %d\n",x, sum, x+sum);
 sum=sum+x;
 return;
}
void intercambio(int *a,int *b)
{
 if (*a>*b)
 {
 int inter;
 inter=*a;
 *a=*b;
 *b=inter;
 }
 return;
}
int main(void) 
{
 int contador,a=9,b=0;

 sum=0;
 intercambio(&a,&b);
 for(contador=a;contador<=b;contador++){
      printf("la suma de contador: %d y sum: : %d es: %d\n",contador, sum, contador+sum);
      suma(contador);
  }
 printf("%d\n",sum);
 return(0);
}
