#include <stdio.h>
#include <math.h>

//1013
int main(){
	int n1, n2, n3, maior;
	scanf("%d %d %d", &n1, &n2, &n3);
	maior = (n1 + n2 + abs(n1-n2))/2;
	maior = (maior + n3 + abs(maior - n3))/2;
	
	printf("%d eh o maior", maior);
	
	return 0;
}
