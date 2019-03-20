#include <stdio.h>

//1113
int main(){
	int n1 = 1, n2 = 0;
	while(1){
		scanf("%d %d", &n1, &n2);
		if(n1>n2){
			printf("Decrescente\n");
		}
		else if(n1<n2){
			printf("Crescente\n");
		}
		else{
			break;
		}
	}
	return 0;
}
