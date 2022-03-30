#include <stdio.h>

int teste(int a, int b, int n);

int main(void) {
  int a, b, n;
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	teste(a, b, n);
}

int teste(int a, int b, int n){
	int aq = a*a;
	int bq = b*b;
	if((aq+bq)==n){
		printf("Sim");
		return 1;
	}
	else{
		printf("Não");
		return 0;
	}
}