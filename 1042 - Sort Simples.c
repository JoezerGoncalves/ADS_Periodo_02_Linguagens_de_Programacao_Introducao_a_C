/*
1042 - Sort Simples

Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em 
ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.

Exemplo de Entrada		Exemplo de Saída
7 21 -14				-14
						7
						21

						7
						21
						-14
						
-14 21 7				-14
						7
						21

						-14
						21
						7
*/

#include <stdio.h>

int main(){
	
	int x, y, z, maior, meio, menor;
	
	scanf("%d %d %d", &x, &y, &z);
	
	if(x>=y && x>=z){
		maior = x;
	}else if(y>x && y>=z){
		maior = y;
	}else if(z>x && z>y){
		maior = z;
	}
	
	if(x<=y && x<=z){
		menor = x;
	}else if(y<x && y<=z){
		menor = y;
	}else if(z<x && z<y){
		menor = z;
	}

	meio = (x+y+z) -maior -menor;
		
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", menor, meio, maior, x, y, z);
	
	return 0;
}
