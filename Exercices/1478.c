#include <stdio.h>

//1478
int main(){
		int i, j, n=1, aux1, aux2;

        scanf("%d", &n);
		while(1){
            if(n == 0) break;
            int matriz[n+1][n+1];
			for(i=1 ; i<=n ; i++){
                aux1 = i;
				for(j=aux2=1; j<=n ; j++){
				 if(j >= i){printf("%3hd", aux2); aux2++;}
				 else{ printf("%3hd", aux1); aux1--;}
                    //matrix structure
					if (j<n)
						putchar(' ');
					else
						printf("\n");
				}
			}
            printf("\n");
            scanf("%d", &n);
            i=1; j=1;
		}
	return 0;
}
