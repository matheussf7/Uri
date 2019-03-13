#include <stdio.h>

//1019
int main(){
    int seconds;
    scanf("%d", &seconds);
    printf("%d:%d:%d\n", (seconds/3600), ((seconds%3600)/60), (seconds%360)%60);
    return 0;
}
