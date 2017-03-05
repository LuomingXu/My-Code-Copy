#include <stdio.h>
#include<time.h>
#include<Windows.h>

//北京时间转格林威治时间

int main()
{
	int bjt;

	printf("请输入北京时间：");
	scanf_s("%d",&bjt);

	if ((bjt/100-8)>=0)
	{
		printf("utc:%d", (bjt / 100-8) * 100 + bjt % 100);
	}
	else
	{
		printf("utc:%d", (bjt / 100 + 16) * 100 + bjt % 100);
	}

	return 0;
}
