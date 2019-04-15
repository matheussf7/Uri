#include <stdio.h>

//1921
int main(){
    unsigned long long int n, res;

    scanf("%llu", &n);
    res = (n*(n-3))/2;
    printf("%llu\n", res);

    return 0;
}
