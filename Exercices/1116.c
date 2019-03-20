#include <stdio.h>

//1116
int main(){
	int n, i, n1, n2, res;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d", &n1, &n2);
		if(n2!=0) printf("%.1lf\n", ((double)n1/(double)n2));
		else printf("divisao impossivel\n");
	}
	return 0;
}
