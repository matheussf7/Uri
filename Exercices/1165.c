#include <stdio.h>

//1165
int main(){
    int num, num2, i, c;

    scanf("%d", &num2);
    for(c=0;c<num2;c++){
        scanf("%d", &num);
        if(num == 1){
          printf("1 eh primo\n");
        }
        for(i = (num-1); i >= 1; i--){
          if(num % i == 0 && i != 1){
            printf("%d nao eh primo\n", num);
            break;
          }
          else{
            if(i == 1){
              printf("%d e primo\n", num);
              break;
            }
          }
        }
    }
      return 0;
}
