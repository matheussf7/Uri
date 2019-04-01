#include <stdio.h>

//1435
int main(){
		int i, j, n=1, aux1=1;

        scanf("%d", &n);
		while(1){
            if(n == 0) break;
            int matriz[n+1][n+1];
			for(i=1 ; i<=n ; i++)
				for(j=1 ; j<=n ; j++){
					aux1 = i;
					if (j < aux1) aux1 = j;
					if (n-i+1 < aux1) aux1 = n-i+1;
					if (n-j+1 < aux1) aux1 = n-j+1;
					printf("%3d", aux1);
					if (j<n)
						putchar(' ');
					else
						printf("\n");
				}
            printf("\n");
            scanf("%d", &n);
            i=1; j=1; aux1 = 1;
		}
	return 0;
}
