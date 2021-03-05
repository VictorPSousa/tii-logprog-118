#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float n,q, raiz ;
	printf("\n Digite um número \n");
	scanf("%f",&n);
	q = n*n;
	raiz = sqrt(n);
	printf("\n O quadrado de %f é: %f e sua raiz quadrada e: %f \n",n,q,raiz);
	return 0;
}
