#include<stdio.h>

//数组简易应用初探;数组越界，int i[10]; i[9]=1; i[9]已是最后的数组，因为是从0开始数起。sizeof(a)/size(a[0])即为数组元素个数

int main()
{
	int x = 0;
	double sum = 0;
	int cnt = 0;
	int number[100];//定义数组

	scanf_s("%d", &x);

	while (x != -1)
	{
		number[cnt] = x;//对数组中的数赋值
		sum += x;
		cnt++;
		scanf_s("%d", &x);
	}

	if (cnt > 0)
	{
		printf("%f\n", sum/cnt);
		int i;
		for (i = 0; i < cnt; i++)
		{
			if (number[i] > sum/cnt)//使用数组中的数
			{
				printf("%d\n", number[i]);//遍历数组
			}
		}
	}

return 0;
}
