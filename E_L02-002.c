/*
Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz
quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o
numero e invalido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float numero, raiz;
	/*
	tipo e comentario em varias linhas
	*/
	
	// comentario em uma linha
	
	printf("Digite um numero: \n");
	scanf("%f", &numero);
	if (numero > 0){
		raiz = sqrt(numero);
		printf("A Raiz e: %f", raiz);
	} else {
		printf("Numero invalido \n \n");
	}
		
	return 0;
}
