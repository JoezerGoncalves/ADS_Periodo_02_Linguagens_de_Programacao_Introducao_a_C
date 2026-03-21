/*
1043 - Triângulo

Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. 
Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, 
mostrando a mensagem

Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.

Exemplo de Entrada		Exemplo de Saída
6.0 4.0 2.0				Area = 10.0

6.0 4.0 2.1				Perimetro = 12.1
*/

#include <stdio.h>

int main(){
	
	double x, y, z, p, maior, menores, trapezio;
	
	scanf("%lf %lf %lf", &x, &y, &z);
	
	if(x>= y && x>=z){
		maior = x;
	}else if(y>=x && y>=z){
		maior = y;
	}else if(z>=x && z>=y){
		maior = z;
	}
	
	menores = (x+y+z) - maior;
	
	if(menores > maior){
		p = x+y+z;
		printf("Perimetro = %.1lf\n", p);
	}else if(maior <= menores){
		trapezio = ((x+y)*z)/2;
		printf("Area = %.1lf\n", trapezio);
	}
	
	return 0;
}
