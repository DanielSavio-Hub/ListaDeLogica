#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf("Digite um numero NATURAL e esse numero ser� exposto a mesma quantidade de vezes que esse n�mero representa");
	scanf("%d", &n);
	
	for(int i = 0; i< n; i++ ){
		printf("%d ", n);
	}
}
