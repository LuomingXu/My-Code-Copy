#include <stdio.h>
#include<time.h>
#include<Windows.h>

//����ʱ��ת��������ʱ��

int main()
{
	int bjt;

	printf("�����뱱��ʱ�䣺");
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
