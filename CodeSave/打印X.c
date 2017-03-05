#include <stdio.h>
#include<time.h>
#include<Windows.h>

//用数组来做，讲需要打印的全部设为1，打印空格的为0，在判断01来打印

int Read(void);

int main() 
{

	clock_t start, finish;
	double duration;

	start = clock();//计时开始

	int **array;
	int hang, i, j;

	hang = Read();
//初始化数组
	array = (int**)malloc(sizeof(int*)*hang);
	for (i = 0; i < hang; i++)
		array[i] = (int*)malloc(sizeof(int)*hang);
//设为01
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
//打印
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

	finish = clock();//计时结束
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
		printf("读入完毕\n");
		fclose(fp);
	}
	else
		printf("无法打开文件\n");

	return hang;
}