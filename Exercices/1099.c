#include <stdio.h>

//1099
int main(){
	int n1, n2, i, c, quant, higher, lower, sum=0;
	scanf("%d", &quant);
	for(i=0;i<quant;i++){
		scanf("%d %d", &n1, &n2);
		if(n1>n2){
			higher=n1; 
			lower=n2;
		}
		else{
			higher=n2; 
			lower=n1;
		}
		//printf("%d %d\n", higher, lower);
		for(c=(lower+1);c<higher;c++){
			if(c%2==1) sum = sum + c;
		}
		printf("%d\n", sum);
		sum = 0;
	}
	
	return 0;
}
