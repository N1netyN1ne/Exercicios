#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float CalculoMedia(float consumo[]){
	float soma=0;
	int i;
	
	for(i=0;i<3;i++){
		soma+=consumo[i];	
	}
	
	return soma/3;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int i;
	float consumo[3];
	printf("Digite o consumo de energia dos ultimos 3 meses:\n");
	for(i=0;i<3;i++){
		printf("Mes %d\n", i+1);
		scanf("%f", &consumo[i]);
	}
	
	printf("A média de consumo do imóvel é de %.2fkwh", CalculoMedia(consumo));
	
	return 0;
}
