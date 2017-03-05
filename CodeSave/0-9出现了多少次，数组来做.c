#include<stdio.h>
//0-9出现了多少次，数组来做

int main()
{
	const number = 10;
	int x = 0;
	int count[10];
	int i;

	for ( i = 0; i < number; i++)
	{
		count[i] = 0;//把每一个count[]都初始化为0
	}

	scanf_s("%d", &x);

	while (x!=-1)
	{
		if (x >= 0 && x <= 9)
		{
			count[x]++;//整个count[]++，count[]是一个整体，在上一个for中初始化了为0
		}
		scanf_s("%d", &x);
	}

	for ( i = 0; i < number; i++)
	{
		printf("%d:%d个\n", i, count[i]);//各自打印
	}

return 0;
}