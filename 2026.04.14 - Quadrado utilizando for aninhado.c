#include<stdio.h>
int main(){
	int tamanho, i, j;
    scanf("%d", &tamanho);
    for (i = 1; i <= tamanho; i++) {
    	for (j = 1; j <= tamanho; j++) {
    		if(i == 1 || i == tamanho || j == 1 || j == tamanho){
    			printf("# ");   	  		
			}else {printf("  ");}
        }
    printf("\n");
    }
	return 0;
}

/*
# # # # #
#       #
#       #
#       #
# # # # #
imprimir este quadrado utilizando for aninhado (utilizar até 15 linhas de codigo)

*/

