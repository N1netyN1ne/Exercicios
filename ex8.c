#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Ebissexto(int ano){
	if (ano % 400 == 0) {
     printf("O ano %d � bissexto", ano);
    } else if (ano % 100 == 0) {
        printf("O ano %d nao � bissexto", ano);
    } else if (ano % 4 == 0) {
        printf("O ano %d � bissexto", ano);
    } else {
        printf("O ano %d nao � bissexto", ano);
    }
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int ano;
	printf("Escolha um ano para ver se ele � bissexto: \n");
	scanf("%d", &ano);
	
	Ebissexto(ano);
	
	
	return 0;
}
