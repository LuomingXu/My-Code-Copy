#include<stdio.h>

//�������Ӧ�ó�̽;����Խ�磬int i[10]; i[9]=1; i[9]�����������飬��Ϊ�Ǵ�0��ʼ����sizeof(a)/size(a[0])��Ϊ����Ԫ�ظ���

int main()
{
	int x = 0;
	double sum = 0;
	int cnt = 0;
	int number[100];//��������

	scanf_s("%d", &x);

	while (x != -1)
	{
		number[cnt] = x;//�������е�����ֵ
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
			if (number[i] > sum/cnt)//ʹ�������е���
			{
				printf("%d\n", number[i]);//��������
			}
		}
	}

return 0;
}
