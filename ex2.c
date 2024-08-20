#include <stdio.h>
#include <locale.h>

float Consumo(float km, float l){
	float media = km/l;
	return media;
}

int main(void) {
	setlocale(LC_ALL,"Portuguese");
	float km,l;
	printf("Digite os KM's rodados:\n");
	scanf("%f",&km);
	printf("digite os litros gastos:\n");
	scanf("%f",&l);
	printf("A media de consumo do seu veiculo e de %fkm/l", Consumo(km,l));

	return 0;
}
