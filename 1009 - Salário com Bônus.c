#include <stdio.h>
 
int main() {
 
    char nome[25];
	double sf, v, sv;
	scanf("%s %lf %lf", &nome, &sf, &v);
	sv=sf+(v*0.15);
    printf("TOTAL = R$ %.2lf\n", sv);
 
    return 0;
}
