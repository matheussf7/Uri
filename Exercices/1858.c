#include <stdio.h>

//1858
int main(){
    int times, i, c, lower, answ;

    scanf("%d", &times);
    for(i=1;i<=times;i++){
        int people[times];
        scanf("%d", &people[i]);
        if(i==1){
            lower = people[i];
            answ = i;
        }
        else if(people[i] < lower){
            lower = people[i];
            answ = i;
        }
    }
    printf("%d\n", answ);
    return 0;
}
