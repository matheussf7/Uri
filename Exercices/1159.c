#include <stdio.h>

//1159
int main(){
    int i, n, q, sum = 0;

    while(n!=0){
        sum = 0;
        q = 0;
        i = 0;
        scanf("%d", &n);
        for(i=n;q<5;i++){
            if(i%2==0){
                sum = sum + i;
                q++;
            }
        }
        if(n == 0){
            break;
        }
        printf("%d\n", sum);
    }
    return 0;
}