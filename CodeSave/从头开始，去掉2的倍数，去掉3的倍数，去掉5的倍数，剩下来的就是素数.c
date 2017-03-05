#include<stdio.h>
//从头开始，去掉2的倍数，去掉3的倍数，去掉5的倍数..............剩下来的就是素数

int main()
{
	const int maxnumber = 25;
	int isPrime[25] = {1};
	int x;
	int i;
	for ( x = 0; x <maxnumber; x++)
	{
		if (isPrime[x])
		{
			for ( i = 2; i*x < maxnumber; i++)
			{
				isPrime[i*x] = 0;
			}
		}
	}
	for ( i = 2; i < maxnumber; i++)
	{
		if (isPrime[i])
		{
			printf("%d\t", i);
		}
	}
	printf("\n");

	return 0;
}