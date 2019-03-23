#include <stdio.h>

//1155
int main(){
	int i;
	float s = 1, sum = 0;
	for(i=1;i<=100;i++){
		sum = sum + (s/i);
	}
	printf("%.2f\n", sum);

	return 0;
}