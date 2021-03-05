#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b,a,area=0.0; //Definição de variáveis
    printf("\n CALCULE A AREA DO TRIANGULO \n");
    printf("\n Digite a base: \n");
    scanf("%f",&b);
    printf("\n Digite a altura: \n");
    scanf("%f",&a);
    area = a*b;
    printf("A AREA E IGUAL: %f",area);
    printf("\n *** FIM *** \n");
}
