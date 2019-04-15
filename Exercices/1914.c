#include <stdio.h>
#include <string.h>

//1914
int main(){
    int n, i, result;
    int n1, n2;
    char name1[11], name2[11], cond1[10], cond2[10];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s %s %s %s", name1, cond1, name2, cond2);
        scanf("%d %d", &n1, &n2);

        if((n1+n2) % 2 == 0){
            if(strcmp(cond1, "PAR") == 0) printf("%s\n", name1);
            if(strcmp(cond2, "PAR") == 0) printf("%s\n", name2);
        }
        else{
            if(strcmp(cond1, "IMPAR") == 0) printf("%s\n", name1);
            if(strcmp(cond2, "IMPAR") == 0) printf("%s\n", name2);
        }
    }

    return 0;
}
