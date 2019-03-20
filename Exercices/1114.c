#include <stdio.h>

//1114
int main(){
	int pass = 2002, passtry = 0;
	while(1){
		scanf("%d", &passtry);
		if(passtry != pass){
			printf("Senha Invalida\n");
		}
		else{
			printf("Acesso Permitido\n");
			break;
		}
	}
	return 0;
}
