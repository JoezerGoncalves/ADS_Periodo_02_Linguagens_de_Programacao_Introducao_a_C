/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado 
evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para 
horas:minutos:segundos, conforme exemplo fornecido.

codigo enviado:
    int n, h, m, s;
    scanf("%d",&n);
    h=n/3600;
    m=(n%3600)/60;
	s=(n%3600)%60;
	printf("%d:%d:%d\n", h, m,s);

*/

#include <stdio.h>
 
int main() {
 
    int n, h, m, s;
    
    scanf("%d",&n);
    
    h=n/3600;
    printf("Horas: %d\n", h);
    
	m=(n%3600)/60;
	printf("Minutos: %d\n", m);
	
	s=(n%3600)%60;
	printf("Segundos: %d\n", s);
 
    return 0;
}
