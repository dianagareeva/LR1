#include <stdio.h>
#include<math.h>

void main(void)
{
	double x = 0;					
	double f;						
	f = pow(cos(x), 2) - pow(sin(x), 2);
	printf("x = %.4lf\n", x);		    
	printf("f = %.4lf\n", f);		
	printf("x = ");					 
	scanf_s("%lf", &x);				
	f = pow(cos(x), 2) - pow(sin(x), 2);
	printf("f = %.4lf\n", f);					
}

