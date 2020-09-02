#include <iostream>
#include <stdio.h>
#include <locale.h>

	class Verify{
		
		public: verificaA(int a){
			if(a<1){
				printf("a não pode ser menor que 1, por favor tente novamente");
				return 0;
			}
			else{
				return a;
			}
	}
};
	
	int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese"); //Aceitar caracteres latinos
	
	Verify checkA;
	int a, b, c;
	
	printf("Neste prgrama você irá inserir 3 números onde:\nA= um número maior que um\nB= um número qualquer\nC= um número qulquer.");
	printf("Será mostrado todos os numeros entre B e C divisiveis por A\n ===================================================\n");
	
	printf("Digite A: ");
	scanf("%d", &a);
	if(checkA.verificaA(a) == 0){
		return 0;
	}
	
	printf("Digite B: ");
	scanf("%d", &b);
	
	printf("Digite C: ");
	scanf("%d", &c);
	
		for(int i = b; b <= c; i++){
			if(i%a == 0){
				printf("%d \n", i);
			}
			if(i == c){
				break;
			}
		}
}




