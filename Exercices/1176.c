#include <stdio.h>

//1176
int main(){
    int i, times, c, n;
    long long int first = 0, second = 1, third;
    scanf("%d", &times);
    for(c=0;c<times;c++){
        scanf("%lld", &n);
        first = 0;
        second = 1;
        third = 0;
        for(i=0;i<n;i++){
            third = first + second;
            first = second;
            second = third;
        }
        printf("Fib(%d) = %lld\n", n, first);
    }

    return 0;
}
