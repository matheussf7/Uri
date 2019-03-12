#include <stdio.h>

//1017
int main(){
	int hours, speed;
	
	scanf("%d", &hours);
	scanf("%d", &speed);
	
	printf("%.3f\n", ((float) (hours*speed)/12));
	
	return 0;
}
