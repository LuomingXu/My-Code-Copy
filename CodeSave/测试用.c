#include<stdio.h>

//例2.4
int main()
{
	double sign = -1.0;
	double sum = 1.0;
	double deno = 2.0;
	double term;

	while (deno<=100)
	{
		term = sign / deno;
		sum = sum + term;
		sign = -sign;
		deno = deno + 1;
	}

	

	return 0;
}
