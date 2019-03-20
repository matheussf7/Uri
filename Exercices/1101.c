#include <stdio.h>

//1101
int main(){
	int n1 = 1, n2 = 1, higher, lower, i, sum;
	while(1){
		scanf("%d %d", &n1, &n2);
		if(n1 == 0 || n2 ==0 || n1 < 0 || n2 < 0) break;
		if(n1>n2){
			higher = n1;
			lower = n2;
		}
		else{
			higher = n2;
			lower = n1;
		}
		for(i=lower;i<=higher;i++){
			printf("%d ", i);
			sum = sum + i;
		}
		printf("Sum=%d\n", sum);
		sum = 0;
		
	}
	
	return 0;
}
