/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um 
valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no 
qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. 
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 = N = 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor 
inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    double entrada;
	int qnotas, centavos, resto;
	
	//Entrada do valor
	scanf("%lf", &entrada);
	
	//Converter valor de float para int e para centavos
	centavos = (int)(entrada * 100 + 0.5);
	
	//Quantidade notas de R$ 100
	qnotas = centavos / 10000;
	resto = centavos % 10000;
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n", qnotas);
	
	//Quantidade notas de R$ 50
	qnotas = resto / 5000;
	resto = resto % 5000;
	printf("%d nota(s) de R$ 50.00\n", qnotas);
	
	//Quantidade notas de R$ 20
	qnotas = resto / 2000;
	resto = resto % 2000;
	printf("%d nota(s) de R$ 20.00\n", qnotas);	

	//Quantidade notas de R$ 10
	qnotas = resto / 1000;
	resto = resto % 1000;
	printf("%d nota(s) de R$ 10.00\n", qnotas);
	
	//Quantidade notas de R$ 5
	qnotas = resto / 500;
	resto = resto % 500;
	printf("%d nota(s) de R$ 5.00\n", qnotas);
	
	//Quantidade notas de R$ 2
	qnotas = resto / 200;
	resto = resto % 200;
	printf("%d nota(s) de R$ 2.00\n", qnotas);
	
	//Quantidade moedas

	//Quantidade moedas de R$ 1.00
	qnotas = resto / 100;
	resto = resto % 100;
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", qnotas);	

	//Quantidade moedas de R$ 0.50
	qnotas = resto / 50;
	resto = resto % 50;
	printf("%d moeda(s) de R$ 0.50\n", qnotas);			
 
 	//Quantidade moedas de R$ 0.25
	qnotas = resto / 25;
	resto = resto % 25;
	printf("%d moeda(s) de R$ 0.25\n", qnotas);
	
 	//Quantidade moedas de R$ 0.10
	qnotas = resto / 10;
	resto = resto % 10;
	printf("%d moeda(s) de R$ 0.10\n", qnotas);

 	//Quantidade moedas de R$ 0.05
	qnotas = resto / 05;
	resto = resto % 05;
	printf("%d moeda(s) de R$ 0.05\n", qnotas);
	
 	//Quantidade moedas de R$ 0.01
	qnotas = resto / 01;
	resto = resto % 01;
	printf("%d moeda(s) de R$ 0.01\n", qnotas);	
			
    return 0;
}

