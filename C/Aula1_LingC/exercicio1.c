#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,media=0.0; //Definição de variáveis
        printf("\n CALCULO DA MEDIA \n");
        printf("\n Digite a primeira nota: ");
    scanf("%f",&n1);
        printf("\n Digite a segunda nota: ");
    scanf("%f",&n2);
       printf("\n Digite a terceira nota: ");
    scanf("%f",&n3);
       printf("\n Digite a quarta nota: ");
    scanf("%f",&n4);
    media = (n1+n2+n3+n4)/4;
        printf("\n A media e igual a : %f",media);
        printf("\n ***FIM*** \n");
    return 0;
}
