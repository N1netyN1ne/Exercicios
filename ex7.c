#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Soma(int num){
	int i, soma=0;
	for(i=1; i <= num;i++){
		soma+=i;
	}
	return soma;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um n�mero para somar ate ele: \n");
	scanf("%d", &num);

	printf("A soma dos n�meros de 1 a %d � %d",num, Soma(num));
	
	return 0;
}
