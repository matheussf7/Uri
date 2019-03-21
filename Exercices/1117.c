#include <stdio.h>

//1117
int main(){
	float n1=-1, n2=-1, res = 0;

	while(n1<0 || n1>10){
            scanf("%f", &n1);
            if(n1<0 || n1>10){
                printf("nota invalida\n");
            }
	}
    while(n2<0 || n2>10){
            scanf("%f", &n2);
            if(n2<0 || n2>10){
                printf("nota invalida\n");
            }
	}
	printf("media = %.2f\n", (n1+n2)/2);
	return 0;
}
