#include <stdio.h>

//1051
int main(){
    float salary, s1, s2, s3;
    scanf("%f", &salary);
    s1 = salary - 2000;
    s2 = salary - 3000;
    s3 = salary - 4500;

    if(salary <= 2000){
        printf("Isento\n");
    }
    if(salary > 2000 && salary <= 3000){
        printf("R$ %.2f\n", s1*0.08);
    }
    if(salary > 3000 && salary <= 4500){
        printf("R$ %.2f\n", ((s1-s2)*0.08) + s2*0.18);
    }
    if(salary > 4500){
        printf("R$ %.2f\n", ((s1-s2)*0.08) + (s2-s3)*0.18 + s3*0.28);
    }

    return 0;
}
