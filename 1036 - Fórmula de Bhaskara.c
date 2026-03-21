/*
1036 - Fórmula de Bhaskara

Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, 
mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, 
imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. 
Imprima sempre o final de linha após cada mensagem.

Exemplos de Entrada			Exemplos de Saída
10.0 20.1 5.1				R1 = -0.29788
							R2 = -1.71212

0.0 20.0 5.0				Impossivel calcular

10.3 203.0 5.0				R1 = -0.02466
							R2 = -19.68408

10.0 3.0 5.0				Impossivel calcular
*/

#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b, c, delta, raizdelta, r1, r2;
	
	scanf("%lf %lf %lf", &a, &b, &c); //entrada dos 3 valores
	
	delta = pow(b, 2) -4*a*c; //calculo de delta
	raizdelta = sqrt(delta);  //raiz do delta
	
	if(delta >=0 && (2*a)>0){
		r1 = (-1*b + raizdelta) / (2*a);
		r2 = (-1*b - raizdelta) / (2*a);
		printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
	}else{
		printf("Impossivel calcular\n");
	}
	
	return 0;
}

