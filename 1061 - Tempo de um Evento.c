/*
1061 - Tempo de um Evento

Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. 
O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. 
Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada 
haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

Exemplo de Entrada		Exemplo de Saída
Dia 5					3 dia(s)
08 : 12 : 23			22 hora(s)
Dia 9					1 minuto(s)
06 : 13 : 23			0 segundo(s)
*/

#include <stdio.h>

int main() {
	
	int d, h, m, s, sti, stf, ste;
	
	//Entrada e calculo dos segundos do inicio:
	printf("Dia ");
	scanf("%d", &d);
	scanf("%d:%d:%d", &h, &m, &s);
	sti = ((d-1)*86400)+(h*3600)+(m*60)+s;
	
	//Entrada e calculo dos segundos do final:
	printf("Dia ");
	scanf("%d", &d);
	scanf("%d:%d:%d", &h, &m, &s);
	stf = ((d-1)*86400)+(h*3600)+(m*60)+s;
	
	//Segundos totais do evento (segundos finais - iniciais)
	ste = stf-sti;
	
	//conversão dos segundos totais em Dia, hora:minutos:segundos
	d = ste/86400;
	printf("%d dia(s)\n", d);
	h = (ste%86400)/3600;
	printf("%d hora(s)\n", h);
	m = ((ste%86400)%3600)/60;
	printf("%d minuto(s)\n", m);
	s = ((ste%86400)%3600)%60;
    printf("%d segundo(s)\n", s);
		
	return 0;
}
