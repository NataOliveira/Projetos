#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x,z;
printf("******************Calc-teste******************\n");
printf(" 1             MULTIPLICACAO\n 2             DIVISAO\n 3             ADICAO\n 4             SUBTRACAO\n\n\n");
scanf("%i", &x);

switch(x){
    case 1:
    printf("\nMultiplicacao\n");
    printf("Digite um numero: ");
    scanf("%i",&a);
    printf("Digite um numero: ");
    scanf("%i",&b);
    z = a*b;
    printf("\nA multiplicacao de ""%i" " e " "%i" " ,igual a : " "%i",a,b,z);

    break;

    case 2:
    printf("\divisao\n");
    printf("Digite um numero: ");
    scanf("%i",&a);
    printf("Digite um numero: ");
    scanf("%i",&b);
    z = a/b;
    printf("%i",z);
    printf("\nA divisao de ""%i" " e " "%i" " ,igual a : " "%i",a,b,z);
    break;

    case 3:
    printf("\nadicao\n");
    printf("Digite um numero: ");
    scanf("%i",&a);
    printf("Digite um numero: ");
    scanf("%i",&b);
    z = a+b;
    printf("%i",z);
    printf("\nA adicao de ""%i" " e " "%i" " ,igual a : " "%i",a,b,z);
    break;

    case 4:
    printf("\nsubtracao\n");
    printf("Digite um numero: ");
    scanf("%i",&a);
    printf("Digite um numero: ");
    scanf("%i",&b);
    z = a-b;
    printf("%i",z);
    printf("\nA subtracao de ""%i" " e " "%i" " ,igual a : " "%i",a,b,z);
    break;

    default:
    printf("ERROR");
}
   return 0;
}
