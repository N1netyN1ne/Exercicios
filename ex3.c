#include <stdio.h>
#include <locale.h>

void verifica(int num){
  if(num%2 == 0){
    printf("O numero digitado é par");
  }else{
    printf("O numero digitado é impar");
  }
}

int main(void) {
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um numero inteiro para verificar se é par ou impar:\n");
	scanf("%d", &num);
	verifica(num);

	return 0;
}
