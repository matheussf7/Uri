#include <stdio.h>

//1154
int main(){
    int age = 1, sum = 0, i = 0;

    do{
        scanf("%d", &age);
        if(age<0){
            break;
        }
        i++;
        sum = sum + age;
    }while(age>0);

    printf("%.2f\n", (float)sum/(float)i);
    return 0;
}
