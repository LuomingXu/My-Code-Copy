#include<stdio.h>
//���n����������m���ĺ�,����flag���ж�

int main()
{
		int flag;
		int count = 0;
		int sum = 0;
		int n;
		int m;
	
		printf("������n��m��\n");
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
		printf("��Ϊ%d\n", sum);

	return 0;
}