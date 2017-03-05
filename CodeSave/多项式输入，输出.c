#include <stdio.h>
#include<time.h>
#include<Windows.h>

//多项式输入，输出
int another(void);
int main(void)
{
	int array[100][2], num = 0, count = -1, sum = 0, o = 0;
	int collum = 2;
	//输入
	for (int i = 0; num != -1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf_s("%d", &num);
			if (num == -1)
				break;
			array[i][j] = num;
		}
		count++;
	}

	for (int i = 0; i < count; i++)
	{
		if (array[i][0] == -1)
			continue;
		//		sum = array[i][1];
		for (int j = i + 1; j < count; j++)
		{
			if (array[i][0] == array[j][0])
			{
				//				sum += array[j][1];
				array[i][1] += array[j][1];
				array[j][0] = -1;
			}
		}

		/*		if (array[i][0] != 0)
		printf("%dx%d+", sum, array[i][0]);
		else if (array[i][0] == 0)
		printf("%d\n", sum);*/
	}
	//排序,二维数组以第一列排序，同时交换其余所有列
	for (int j = 0; j < count; j++)
		for (int i = 0; i < count - 1 - j; i++)
			if (array[i][0] < array[i + 1][0])
			{
				/*				o = array[i][0];							原始一个个来的程序
				array[i][0] = array[i + 1][0];
				array[i + 1][0] = o;

				o = array[i][1];
				array[i][1] = array[i + 1][1];
				array[i + 1][1] = o;*/
				for (int c = 0; c < collum; c++)
				{
					o = array[i][c];
					array[i][c] = array[i + 1][c];
					array[i + 1][c] = o;
				}
			}
	//数组输出
	/*for (int i = 0; i < count; i++)
	{
	for (int j = 0; j < 2; j++)
	{
	printf("array[%d][%d]=%d\t", i, j, array[i][j]);
	}
	puts("\n");
	}*/
	for (int i = 0; array[i][0] != -1; i++)
	{
		if (array[i][0] != 0)
			printf("%dx%d+", array[i][1], array[i][0]);
		else
			printf("%d\n", array[i][1]);
	}
	return 0;
}
//上题改
int another(void)
{
	int array[100][2], num = 0, count = -1, sum = 0, o = 0, stop = 0;
	int i = 0, j = 0, c = 0;
	int collum = 2;

	for ( i = 0; stop != 2; i++)
	{
		for ( j = 0; j < 2; j++)
		{
			scanf_s("%d", &num);
			array[i][j] = num;
			if (num == 0)
				stop++;
		}
		count++;
	}

	count++;

	for ( i = 0; i < count; i++)
	{
		if (array[i][0] == -1)
			continue;

		for ( j = i + 1; j < count; j++)
		{
			if (array[i][0] == array[j][0])
			{

				array[i][1] += array[j][1];
				array[j][0] = -1;
			}
		}
	}

	for ( j = 0; j < count - 1; j++)
		for ( i = 0; i < count - 1 - j; i++)
			if (array[i][0] < array[i + 1][0])
			{
				for ( c = 0; c < collum; c++)
				{
					o = array[i][c];
					array[i][c] = array[i + 1][c];
					array[i + 1][c] = o;
				}
			}

	for ( i = 0; array[i][0] != -1; i++);
	count = i;

	for ( i = 0; array[i][0] != -1; i++)
	{
		if ( i < count-1 )
		{
			if (array[i + 1][1] > 0 && array[i][0] != 1 )
				printf("%dx%d+", array[i][1], array[i][0]);

			else if (array[i + 1][1] < 0 && array[i][0] != 1 )
				printf("%dx%d", array[i][1], array[i][0]);

			else if(array[i + 1][1] > 0 && array[i][0] == 1 )
				printf("%dx+", array[i][1]);

			else if(array[i + 1][1] < 0 && array[i][0] == 1 )
				printf("%dx", array[i][1]);
		}
		else if (i==count-1)
		{
			if( array[i][0] == 0 )
				printf("%d\n", array[i][1]);
			else
				printf("%dx%d\n", array[i][1], array[i][0]);
		}
	}
	return 0; 
}