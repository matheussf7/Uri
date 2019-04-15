#include <stdio.h>

//1864
int main(){
    // L I F E  I S  N O T  A  P R O B L E M  T O  B E  S O L V E D
    char life[35] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("%c", life[i]);
    }
    printf("\n");
    return 0;
}
