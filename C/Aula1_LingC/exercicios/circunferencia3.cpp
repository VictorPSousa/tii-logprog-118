#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float r,pi=3.14159,ac;
	printf("Oi user! Me diga o raio da circunferencia \n");
	scanf("%f",&r );
	ac = pi*(r*r);
	printf("\n A �rea da circunfer�ncia �: %f",ac);
	return 0;
}
