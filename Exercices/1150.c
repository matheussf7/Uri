#include <stdio.h>

//1150
int main(){
    int i, x, z, c = 0, sum = 0;
    scanf("%d %d", &x, &z);
    while(z<=x){
        scanf("%d", &z);
    }
    for(i=x;sum<=z;i++){
        sum = sum + i;
        c++;
    }
    printf("%d\n", c++);
    return 0;
}
