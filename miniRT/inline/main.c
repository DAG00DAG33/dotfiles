#include <math.h>

double func(double a)
{
	int i = 0;
	i++;
	i--;
	if (i < 0)
		return (0);
	else
		return (a);
}
int main()
{
	double f = 999999;
	for(long int i = 0;i < 10000000000; i++)
		f = func(f);
	printf("%f\n", f);
}
