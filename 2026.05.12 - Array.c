#include <stdio.h>

int main(){
	
	int alunos[30], i, soma, media;
	
	for(i=0; i<30; i++){
		scanf("%d", &alunos[i]);
		soma += alunos[i];
	}
	
	media = soma/30;
	printf("%d", media);
	
	return 0;
}
