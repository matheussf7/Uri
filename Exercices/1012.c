#include <stdio.h>

//1012
int main(){
	double a, b, c, pi = 3.14159;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	//Formula for triangle's area: A = (b x a)/2
	printf("TRIANGULO: %.3lf\n", (a * c)/2);
	
	//Formula for circle's area: A = (pi * r²)
	printf("CIRCULO: %.3lf\n", pi *(c*c));
	
	//Formula for trapezium's area: A = ((B + b) * h)/2
	printf("TRAPEZIO: %.3lf\n", ((a + b)*c)/2);
	
	// Formula for square's area: A = l² 
	printf("QUADRADO: %.3lf\n", (b*b));
	
	//Formula for retangle's area: A = b x a
	printf("RETANGULO: %.3lf\n", (a*b));
	
	return 0;
}
