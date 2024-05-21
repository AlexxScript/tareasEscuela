#include<stdio.h>
#include <ctype.h>

void main(){
    char nombre[100];
    char nacionalidad[50];
    char automovil;
    char bici;
    char nadar;
    int edad;
    int altura;
    char seguir;

    do {
      printf("Ingrese su nombre completo: \n");
      fgets(nombre,sizeof(nombre),stdin);
        
      printf("Ingrese su edad: \n");
      scanf("%d",&edad);

      printf("Ingrese su altura:\n");
      scanf("%d",&altura);
      printf("Cual es su nacionalidad?:\n");
     // getchar();
      fgets(nacionalidad,sizeof(nacionalidad),stdin);
      printf("Sabe nadar?: s/n \n");
      scanf(" %c",&nadar);
    printf("Sabe manejar automovil?: s/n \n");
      scanf(" %c",&automovil);
      printf("Sabe manejar bicicleta?: s/n \n");
      scanf(" %c",&bici);

      printf("Hola %s sus datos son \n",nombre);
      printf("Su nacionalidad es %s \n",nacionalidad);
      if(edad>=18){
        printf("es mayor de edad\n");
      } else {
      	printf("es menor de edad\n");
      }

    if(toupper(automovil)=='S'){
        printf("sabe manejar automovil\n");
    } else {
      	printf("no sabe manejar automovil\n");
    }
    if(toupper(bici)=='S'){
        printf("sabe manejar bicicleta\n");
    } else {
      	printf("no sabe manejar bicicleta\n");
    }
    if(toupper(nadar)=='S'){
        printf("sabe nadar\n");
    } else {
      	printf("no sabe nadar\n");
    }
      if(altura==170){
        printf("la altura de %s es 1.70\n ",nombre);
      }
      if(altura!=170){
        printf("la altura de %s no es 1.70\n ",nombre);
      }
      printf("desea continuar en el programa? S/N:\n");
      scanf(" %c",&seguir);
    //getchar();
    } while(toupper(seguir) == 'S');

}

