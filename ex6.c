#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ImprimirVetor(int vetor[],int tam){
	int i;
	printf("Os números ordenados ficam assim:\n");
	for(i=0;i<tam;i++){
		printf("%d ", vetor[i]);
	}
}

void Boublesort(int nums[], int tam){
	int i,j,temp,x;
	temp=0;
	x=1;
	
	for(i=0;i<tam;i++){
		for(j=0;j<(tam-x);j++){
			if(nums[j]>nums[j+1]){
				temp=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=temp;
			}
		}
		x++;
	}
	ImprimirVetor(nums,tam);
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int nums[3],i;
	printf("Digite 3 números: \n");
	for(i=0;i<3;i++){
		scanf("%d",&nums[i]);
	}
	Boublesort(nums,3);
	
	
	return 0;
}
