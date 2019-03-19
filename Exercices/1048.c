#include <stdio.h>

//1048
int main(){
	double salary;
	scanf("%lf", &salary);
	if(salary >= 0 && salary <= 400){
		printf("Novo salario: %.2lf\n", salary*1.15);
		printf("Reajuste ganho: %.2lf\n", salary*0.15);
		printf("Em percentual: 15 %%\n");
		return 0;
	}
	if(salary > 400 && salary <= 800){
		printf("Novo salario: %.2lf\n", salary*1.12);
		printf("Reajuste ganho: %.2lf\n", salary*0.12);
		printf("Em percentual: 12 %%\n");
		return 0;
	}
	if(salary > 800 && salary <= 1200){
		printf("Novo salario: %.2lf\n", salary*1.10);
		printf("Reajuste ganho: %.2lf\n", salary*0.10);
		printf("Em percentual: 10 %%\n");
		return 0;
	}
	if(salary > 1200 && salary <= 2000){
		printf("Novo salario: %.2lf\n", salary*1.07);
		printf("Reajuste ganho: %.2lf\n", salary*0.07);
		printf("Em percentual: 7 %%\n");
		return 0;
	}
	if(salary > 2000){
		printf("Novo salario: %.2lf\n", salary*1.04);
		printf("Reajuste ganho: %.2lf\n", salary*0.04);
		printf("Em percentual: 4 %%\n");
		return 0;
	}

	return 0;
}
