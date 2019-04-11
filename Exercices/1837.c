#include <stdio.h>

//1837
int main(){
    int a, b, q, r;

    scanf("%d %d", &a, &b);
    q = a/b;
    r = a % b;
    if(r<0){
        if(b>0) q--;
        else q++;
        while(a != b * q + r){
            r++;
        }
    }
    if(a == 0){q=0;r=0;}

    printf("%d %d\n", q, r);
    return 0;
}
