/*
1151 - Fibonacci Fácil

A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. 
Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva 
um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Saída
Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve haver 
espaço após o último valor.

Exemplo de Entrada			Exemplo de Saída
5							0 1 1 2 3
*/

# include <stdio.h>

int main(){
	
	int a = 0;
	int b = 1;
	int c, termos;
	
	scanf("%d", &termos);
	
	int i=1;
	
	while(i<=termos){
		if (i == 1){
			printf("0 ");
		}else if (i == 2){
			printf("1");
		}else{
			c = a+b;
			printf(" %d", c);
			a = b;
			b = c;
		}
	i++;
	}
    printf("\n");
			
	return 0;
}
