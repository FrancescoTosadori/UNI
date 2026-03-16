#include<stdio.h>

int main(void){
	int dividendo, divisore;
	float quoziente;

	scanf("%d", &dividendo);
	scanf("%d", &divisore);
	quoziente = (float)dividendo / (float)divisore;
	int resto = (int)dividendo % (int)divisore;
	printf("quoziente reale %f quoziente intero %d resto %d",quoziente,(int)quoziente,resto);
}
