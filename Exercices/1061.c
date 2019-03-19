#include <stdio.h>

//1061
int main(){
 int hours, endhours,minutes,endminutes,days,endday,seconds,endseconds;

 scanf("Dia %d",&days);
 scanf("%d : %d : %d\n",&hours,&minutes,&seconds);
 scanf("Dia %d",&endday);
 scanf("%d : %d : %d",&endhours,&endminutes,&endseconds);

seconds = endseconds - seconds;
minutes = endminutes - minutes;
hours = endhours - hours;
days = endday - days;

if(seconds<0){
	seconds+=60;
	minutes--;
}

if(minutes<0){
	minutes+=60;
	hours--;
}

if(hours<0){
	hours+=24;
	days--;
}

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);


 return 0;
}


