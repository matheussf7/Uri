#include <stdio.h>

int main(){
	double salary, total;
	char name[10];
	
	scanf("%s", &name);
	scanf("%lf", &salary);
	scanf("%lf", &total);
	
	printf("TOTAL = %.2f", (0.15*total + salary));
	return 0;
}
