#include <stdio.h>

int modulo(int i1, int i2){
    int res = i1 - i2;
    if(res < 0) res = res * -1;
    return res;
}

int triang(int a, int b, int c){
    if(modulo(b, c) < a < (b + c) && modulo(a, c) < b < (a + c) && modulo(a, b) < c < (a + b)) return 0;
    else return 1;
}

//1929
int main(){
    int a, b, c, d;
    char res;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", triang(a, b, c));

    return 0;
}
