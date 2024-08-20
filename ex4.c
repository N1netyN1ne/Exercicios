#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float CalculoMedia(float notas[]){
	int i=0;
	float soma=0;
	for(i=0;i<3;i++){
		soma+=notas[i];
	}
	return soma/3;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float notas[3];
	int i;
	
	for(i=0;i<3;i++){
		printf("Digite a nota %d\n",i+1);
		scanf("%f", &notas[i]);
	}
	printf("A média das notas é %f", CalculoMedia(notas));
	
	return 0;
}
