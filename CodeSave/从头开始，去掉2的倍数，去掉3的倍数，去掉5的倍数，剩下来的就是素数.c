#include<stdio.h>
//��ͷ��ʼ��ȥ��2�ı�����ȥ��3�ı�����ȥ��5�ı���..............ʣ�����ľ�������

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