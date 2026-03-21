/*
1049 - Animal

Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível 
segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos 
animais seguintes foi escolhido, através das três palavras fornecidas.
______________________________________________________
						1>carnivoro		= aguia
			1>ave
						1>onivoro		= pomba
vertebrado
						2>onivora		= homem
			2>mamifero
						2>herbivoro		= vaca
______________________________________________________
						1>hematofago	= pulga
			1>inseto
						1>herbivoro		= largata
invertebrado
						2>hematofago	= sanguessuga
			2>anelideo
						2>onivoro		= minhoca
______________________________________________________
Entrada
A entrada contém 3 palavras, uma em cada linha, necessárias para identificar 
o animal segundo a figura acima, com todas as letras minúsculas.

Saída
Imprima o nome do animal correspondente à entrada fornecida.

Exemplos de Entrada		Exemplos de Saída
vertebrado				homem
mamifero
onivoro

vertebrado				aguia
ave
carnivoro

invertebrado			minhoca
anelideo
onivoro
*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char ent1[20], ent2[20], ent3[20], vert[] = "vertebrado", ave[] = "ave", mami[] = "mamifero", carn[] = "carnivoro", oniv[] = "onivoro", herb[] = "herbivoro";
	char inse[] = "inseto", anel[] = "anelideo", hema[] = "hematofago";
	
	scanf("%s %s %s", ent1, ent2, ent3);
	
	if(strcmp(ent1, vert) == 0){ // primeira entrada como vertebrado
		if(strcmp(ent2, ave) == 0){
			if(strcmp(ent3, carn) == 0){
				printf("aguia\n"); 
			}else{
				printf("pomba\n");
			}
		} else if(strcmp(ent2, mami) == 0){
			if(strcmp(ent3, oniv) == 0){
				printf("homem\n"); 
			}else{
				printf("vaca\n");
			}
		}
	}else {						//primeira entrada como invertebrado
		if(strcmp(ent2, inse) == 0){
			if(strcmp(ent3, hema) == 0){
				printf("pulga\n");
			}else{
				printf("lagarta\n");
			}
		} else if(strcmp(ent2, anel) == 0){
			if(strcmp(ent3, hema) == 0){
				printf("sanguessuga\n");
			}else{
				printf("minhoca\n");
			}
		}
	}
	
	return 0;
}

