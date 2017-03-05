#include<stdio.h>

int main()
{
	int x;
	int first=0;
	int t=0;

	printf("请输入一个三位数：");
	scanf_s("%d", &x);

	first = x % 10;
	t = first * 10;
	x /= 10;

	while (x!=0)
	{
		first = x % 10;
		t = (t + first) * 10;
		x /= 10;
	}

	printf("%d", t/10);

	return 0;
}