#include <stdio.h>

//1589
int main(){
	int i, num, c1, c2;
	
	scanf("%d", &num);
	
	for(i=0;i<num;i++){
		scanf("%d %d", &c1, &c2);
		printf("%d\n", c1+c2);
	}
}
