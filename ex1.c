#include <stdio.h>
#include <locale.h>

float CalculoGraus(float grau){
	float resultado = grau *9/5 + 32;
  	return resultado;
}

int main(void) {
	setlocale(LC_ALL,"Portuguese");
	float C=0;
	printf("Digite os graus celcius a serem convertidos\n");
	scanf("%f", &C);
	printf("%.1fC em Fahrenheit é %.1fF", C, CalculoGraus(C));
  
  	return 0;
}
