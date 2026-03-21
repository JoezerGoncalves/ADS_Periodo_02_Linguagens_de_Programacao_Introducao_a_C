/*
1047 - Tempo de Jogo com Minutos

Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .

Exemplo de Entrada		Exemplo de Saída
7 8 9 10				O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)

7 7 7 7					O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)

7 10 8 9				O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)
*/

#include <stdio.h>

int main(){
	
	int h, m, mt, mi, mf;
	
	scanf("%d %d", &h, &m);	//entrada da hora/minutos de inicio
	mi = h*60 + m;			//hora/minutos totais do inicio do jogo
	scanf("%d %d", &h, &m); //entrada da hora/minuto de fim do jogo
	mf = h*60 + m;			//hora/minutos totais do fim do jogo
	mt = mf - mi;			//tempo total do jogo em minutos
	
	if(mt<=0){				//validação para saber se o jogo inciou e terminou no mesmo dia
		mt+=1440;			//se a validação for negativa acrescenta 1440 minutos equivalente a um dia
	}
	
	h = mt/60;				//conversão para saber horas totais
	m = mt%60;				//conversão para saber minutos totais
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m); //impressão do resultado
			
	return 0;
}
