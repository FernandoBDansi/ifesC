#include<stdio.h>

int main(){
	int x;

	printf("\n\tInforme um valor inteiro: ");
	scanf("%d", &x);

	// verifica se o n�mero � divis�vel por 2
	if((x % 2) == 0){
		printf("\n\t%d eh divisivel por 2", x);
		// se � divis�vel por 2 e por 5, ser� tamb�m por 10
		if((x % 5) == 0)
			printf(", por 5");

		printf("\n\n");
	}
	// verificar se � divis�vel por 5, somente
	else if((x % 5) == 0){
		printf("\n\t%d eh divisivel por 5\n\n", x);
	}
	else
		printf("\n\t%d NAO eh divisivel por 2, 5 ou 10\n\n", x);
}