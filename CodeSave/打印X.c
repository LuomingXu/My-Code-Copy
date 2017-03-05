#include <stdio.h>
#include<time.h>
#include<Windows.h>

//����������������Ҫ��ӡ��ȫ����Ϊ1����ӡ�ո��Ϊ0�����ж�01����ӡ

int Read(void);

int main() 
{

	clock_t start, finish;
	double duration;

	start = clock();//��ʱ��ʼ

	int **array;
	int hang, i, j;

	hang = Read();
//��ʼ������
	array = (int**)malloc(sizeof(int*)*hang);
	for (i = 0; i < hang; i++)
		array[i] = (int*)malloc(sizeof(int)*hang);
//��Ϊ01
	for ( i = 0; i < hang; i++)
	{
		for (j = 0; j < hang; j++)
		{
			if ((i == j) || (i + j) == hang - 1)
				array[i][j] = 1;
			else
				array[i][j] = 0;
		}
	}
//��ӡ
	for ( i = 0; i < hang; i++)
	{
		for (j = 0; j < hang; j++)
		{
			if (array[i][j] == 1)
				printf("X");
			else if (array[i][j] == 0)
				printf(" ");
		}
		printf("\n");
	}

	finish = clock();//��ʱ����
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("Time: %fms\n", duration * 1000);

	return 0;
}

int Read(void)
{
	int hang = 0;
	FILE *fp;

	fopen_s(&fp,"c:\\wenjian.txt", "r");
	if (fp)
	{
		fscanf_s(fp, "%d", &hang);
		printf("�������\n");
		fclose(fp);
	}
	else
		printf("�޷����ļ�\n");

	return hang;
}