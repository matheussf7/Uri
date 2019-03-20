#include <stdio.h>

//1079
int main(){
    float v1, v2, v3;
    int i, qt;
    scanf("%d", &qt);
    for(i=qt;i>0;i--){
        scanf("%f %f %f", &v1, &v2, &v3);
        printf("%.1f\n", (v1*2+v2*3+v3*5)/10);
    }

    return 0;
}
