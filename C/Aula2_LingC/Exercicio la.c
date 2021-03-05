#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int ft;
    float n1,n2,n3,n4,m,e;
    printf("\n Digite suas faltas \n");
    scanf("%d", &ft);
    if(ft>15)
        printf("\n Voce foi reprovado por faltas \n");
    else
        printf("\n Digite suas notas \n");
        scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
        m = (n1+n2+n3+n4)/4;
        if(m>=6)
            printf("\n Voce foi aprovado, sua media foi %2.f \n", m);
        else
            printf("\n Digite suas nota de exame \n");
            scanf("%f",&e);
            m = (m+e)/2;
            if(m>=5)
                printf("\n Voce foi aprovado em exame, sua media foi %2.f \n", m);
            else
                printf("\n Voce foi reprovado \n");

}
