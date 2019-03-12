#include <stdio.h>

//1014
int main(){
	int x;
	float y;
	scanf("%d", &x);
	scanf("%f", &y);
	
	printf("%.3f km/l\n", (x/y));
	return 0;
}
