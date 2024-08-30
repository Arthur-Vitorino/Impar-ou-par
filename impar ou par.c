#include <stdio.h>

int main(){
	int x;
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	
	if(x % 2 == 0){
		printf("Seu numero e par!");
	}else printf("Seu numero e impar!");
}
