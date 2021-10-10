#include <math.h>

double x = 0;
double result;

void f(void)
{
	result = pow(cos(x), 2) - pow(sin(x), 2);
}