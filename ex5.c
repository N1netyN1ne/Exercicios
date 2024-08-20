#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int CalculoFatorial(int num){
	if(num==0){
		return 1;
	}else{
		return num*CalculoFatorial(num-1);
	}
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	printf("Digite um número para calcular seu fatorial\n");
	scanf("%d",&num);
	printf("O fatorial de %d é %d",num, CalculoFatorial(num));
	
	return 0;
}
