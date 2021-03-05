#include <stdio.h>

int main() {
	float at,a,b;
	printf("\n Digite a altura do triangulo \n");
	scanf("%f",&a);
	printf("\n Digite a base do triangulo \n");
	scanf("%f",&b);
	at = (a*b)/2;
	printf("\n A area do triangulo e: %f",at);
	return 0;
}
