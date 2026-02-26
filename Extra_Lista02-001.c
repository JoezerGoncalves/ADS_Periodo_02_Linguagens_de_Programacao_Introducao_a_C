/*
Faca um programa que receba dois numeros e mostre qual deles e o maior.
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero1, numero2;
	printf("Digite um numero: ");
	scanf("%d %d", &numero1, &numero2);
	printf("Os numeros digitados foram: %d e %d\n", numero1, numero2);
	if (numero1 > numero2){
		printf("E o maior numero e: %d\n", numero1);
	} else { 
		printf("E o maior numero e: %d\n", numero2);
	}
	
	return 0;
}
