#include <iostream>
#include <stdio.h>
#include <locale.h>

	class Verify{		
		public: verificaA(int a){
			if(a<1){
				printf("a n�o pode ser menor que 1, por favor tente novamente");
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
	int acumulador = 0;
	
	printf("Neste prgrama voc� ir� inserir 3 n�meros onde:\nA= um n�mero maior que um\nB= um n�mero qualquer\nC= um n�mero qulquer.");
	printf("Ser� mostrado todos os numeros entre B e C divisiveis por A\n ===================================================\n");
	
	printf("Digite A: ");
	scanf("%d", &a);
	if(checkA.verificaA(a) == 0){
		return 0;
	}
	
	printf("Digite B: ");
	scanf("%d", &b);
	
	printf("Digite C: ");
	scanf("%d", &c);
	
	if(b < c){
		
		for(int i = b; b <= c; i++){
			if(i%a == 0){
				printf("%d \n", i);
				acumulador+= i;
			}
			if(i == c){
				printf("a soma de todos os n�meros multiplos de %d � : %d", a, acumulador);
				break; // esse comando for�a o encerramento do la�o
			}
		}
	}
	else{
		for(int i = b; b >= c; i--){ // para caso de c for menor que b
			if(i%a == 0){
				printf("%d \n", i);
				acumulador+= i;
			}
			if(i == c){
				printf("a soma de todos os n�meros multiplos de %d � : %d", a, acumulador);
				break; // esse comando for�a o encerramento do la�o
			}
		}
		
	}	
		
}




