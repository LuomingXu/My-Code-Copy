#include<stdio.h>
//求第n个素数到第m个的和,外引flag做判断

int main()
{
		int flag;
		int count = 0;
		int sum = 0;
		int n;
		int m;
	
		printf("请输入n，m。\n");
		scanf_s("%d %d", &n, &m);
			
	for (int i = 2; count < m; i++) 
	{
		flag = 1;
	
		for (int a = 2; a<i; a++) 
		{
			if (i%a == 0) 
			{
				flag = 0;
			}
		}
		if (flag == 1) 
		{
			count++;
			if (count >= n)
			{
				sum = sum + i;
			}
		}
	}
		printf("和为%d\n", sum);

	return 0;
}