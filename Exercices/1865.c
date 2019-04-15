#include <stdio.h>
#include <string.h>

int main(){
    int f, i, n;
    char p[10], answ;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s", p);
        scanf("%d", &f);

        if(strcmp(p, "Thor") == 0) answ = 'Y';
        else answ = 'N';
        printf("%c\n", answ);
    }

    return 0;
}
