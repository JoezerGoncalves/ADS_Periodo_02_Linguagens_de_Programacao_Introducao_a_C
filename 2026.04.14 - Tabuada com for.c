/*
usuario vai digitar dois numeros de 1 a 10 (A < B)

imprimir uma tabuada
exemplo 2 e 4

2x1=2
...
...
4x10=40 

*/
#include<stdio.h>

int main(){
	
	int a, b, i, j, result;
	
	scanf("%d %d", &a, &b);
	i = a;
	
	for(i; i<=b; i++){
		for(j=1; j<=10; j++){
		result = i *j;
		printf("%d x %d = %d\n", a, j, result);		
		}
		a++;
	}
	
	return 0;
}
