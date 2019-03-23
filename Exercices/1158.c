#include <stdio.h>

//1158
int main(){
    int i, c, n, q = 0, sum = 0, n1, n2;
    scanf("%d", &n);
    for(c=0;c<n;c++){
        scanf("%d %d", &n1, &n2);
        sum = 0;
        q = 0;
        i = 0;
        for(i=n1;q<n2;i++){
            if(i%2==1 || i%2==-1){
                sum = sum + i;
                q++;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}