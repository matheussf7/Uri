#include <stdio.h>

//1759
int main(){
	int num, i;
	scanf("%d", &num);
	for(i=0;i<num;i++){
		if(i==num-1) printf("Ho!\n");
		else printf("Ho ");
	}
	return 0;
}
