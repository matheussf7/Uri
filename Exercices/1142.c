#include <stdio.h>

//1142
int main(){
    int i, c=0, n, aux;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(c; aux<3; aux++){
            c++;
            printf("%d ", c);
            if(aux==2){
                printf("PUM\n");
            }
        }
        c++;
        aux = 0;
    }
    return 0;
}
