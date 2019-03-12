#include <stdio.h>

//1009
int main(){
	double salary, total;
	char name[10];
	
	scanf("%s", &name);
	scanf("%lf", &salary);
	scanf("%lf", &total);
	
	printf("TOTAL = R$ %.2f\n", (0.15*total + salary));
	return 0;
}
