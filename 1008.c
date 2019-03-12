#include <stdio.h>

int main(){
	int number, hours;
	float salary;
	
	scanf("%d", &number);
	scanf("%d", &hours);
	scanf("%f", &salary);
	
	printf("NUMBER = %d\n", number);
	printf("SALARY = U$ %.2f\n", (hours * salary));
	
	
	return 0;
}
