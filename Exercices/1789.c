#include <stdio.h>

//1789
int main(){
	int var, i, maior;
	while(scanf("%d", &var) != EOF){
		getchar();
		int vetor[var];
		maior = 0;
		for(i=0;i<var;i++){
			scanf("%d", &vetor[i]);
			getchar();
			if(vetor[i]>maior){
				maior = vetor[i];
			}
		}
		if(maior < 10) printf("1\n");
		else if(maior >= 10 && maior <20) printf("2\n");
		else if(maior > 20) printf("3\n");
	}
	return 0;
}
