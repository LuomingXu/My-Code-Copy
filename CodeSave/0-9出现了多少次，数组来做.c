#include<stdio.h>
//0-9�����˶��ٴΣ���������

int main()
{
	const number = 10;
	int x = 0;
	int count[10];
	int i;

	for ( i = 0; i < number; i++)
	{
		count[i] = 0;//��ÿһ��count[]����ʼ��Ϊ0
	}

	scanf_s("%d", &x);

	while (x!=-1)
	{
		if (x >= 0 && x <= 9)
		{
			count[x]++;//����count[]++��count[]��һ�����壬����һ��for�г�ʼ����Ϊ0
		}
		scanf_s("%d", &x);
	}

	for ( i = 0; i < number; i++)
	{
		printf("%d:%d��\n", i, count[i]);//���Դ�ӡ
	}

return 0;
}