/*
1046 - Tempo de Jogo

Leia a hora inicial e a hora final de um jogo. A seguir calcule 
a duração do jogo, sabendo que o mesmo pode começar em um dia e 
terminar em outro, tendo uma duração mínima de 1 hora e máxima 
de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de 
início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo.

Exemplo de Entrada					Exemplo de Saída
16 2								O JOGO DUROU 10 HORA(S)
0 0									O JOGO DUROU 24 HORA(S)
2 16								O JOGO DUROU 14 HORA(S)
*/

#include <stdio.h>

int main() {
	
	//variaveis usadas: i= hora de inicio; f= hora fim; tempo= Duração do jogo; 
	//h24=caso hora de inicio maior que de fim descobre quanto tempo ate as 24horas e somo com o fim
	int i, f, tempo, h24;
	
	//le as variaveis
	scanf("%d %d", &i, &f);
	
	//se o horario de inicio for menor que fim, basta subitrair, pois a partida iniciou e terminou no mesmo dia
	if(i<f) {
		tempo = f-i;
		printf("O JOGO DUROU %d HORA(S)\n", tempo);
	
	//se o horario de inicio for mair que fim descobre quanto tempo ate as 24h e soma com o fim
	} else if(i>f) {
		h24 = 24-i;
		tempo = h24 + f;
		printf("O JOGO DUROU %d HORA(S)\n", tempo);
	
	// se o horario de inicio for igual ao de fim, o jogo durou 24h
	} else if(i==f) {
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
		
	
	
	return 0;
}
