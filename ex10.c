#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int MDC(int A, int B){
	int Q,R;
	if(A==0){
		return B;
	}else if(B==0){
		return A;
	}else{
		Q=A/B;
		R=A%B;
		return MDC(B,R);
	}
}

int main(int argc, char *argv[]) {
	int nums[2],i;
	setlocale(LC_ALL,"Portuguese");
	for(i=0;i<2;i++){
		printf("Digite o %dº número para fazer o MDC: \n",i+1);
		scanf("%d", &nums[i]);
	}

	printf("O MDC de %d é %d é %d",nums[0],nums[1], MDC(nums[0],nums[1]));
	
	return 0;
}
