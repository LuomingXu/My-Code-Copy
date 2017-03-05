#include<stdio.h>

int main()
{
	int x;
	int ou = 0;
	int ji = 0;
	int t;

	printf("请输入一正整数，结束请输入-1。\n");
	scanf_s("%d", &x);

	while (x!=-1)
	{	
		t = x % 2;

		if (t==0)
		{
			ou = ou + 1;
		}
		else if (t == 1)
		{
			ji = ji + 1;
		}

		printf("请输入一正整数，结束请输入-1。\n");
		scanf_s("%d", &x);
	}

	printf("偶数有%d个，奇数有%d个", ou, ji);

	return 0;
}