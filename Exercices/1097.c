#include <stdio.h>

//1097
int main(){
	int i = 1, j = 7, c, aux=0, aux2=0;
	for(c=0;c<15;c++){
		printf("I=%d J=%d\n", i, j);
		j--;
		aux++;
		if(aux == 3){
			aux = 0;
			j = j + 5;
			i = i + 2;
			aux2++;
		}
	}
	return 0;
}
