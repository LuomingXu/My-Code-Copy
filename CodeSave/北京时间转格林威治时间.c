#include <stdio.h>
#include<time.h>
#include<Windows.h>

//北京时间转格林威治时间

int main()
{
	int bjt;
	int utc;

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




//数组简易应用初探;数组越界，int i[10]; i[9]=1; i[9]已是最后的数组，因为是从0开始数起。sizeof(a)/size(a[0])即为数组元素个数

//int main()
//{
//	int x = 0;
//	double sum = 0;
//	int cnt = 0;
//	int number[100];//定义数组
//
//	scanf_s("%d", &x);
//
//	while (x != -1)
//	{
//		number[cnt] = x;//对数组中的数赋值
//		sum += x;
//		cnt++;
//		scanf_s("%d", &x);
//	}
//
//	if (cnt > 0)
//	{
//		printf("%f\n", sum/cnt);
//		int i;
//		for (i = 0; i < cnt; i++)
//		{
//			if (number[i] > sum/cnt)//使用数组中的数
//			{
//				printf("%d\n", number[i]);//遍历数组
//			}
//		}
//	}
//
//return 0;
//}

//int search(int key, int a[], int length)
//{
//	int ret = -1;
//
//	int i;
//	for ( i = 0; i < length; i++)
//	{
//		if (a[i] == key)
//		{
//			ret = i;
//			break;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int a[] = { 2,4,6,7,1,3,5,7,9,11,13,23,14,32 };
//	int x;
//	int loc;
//	printf("请输入一个数：");
//  scanf_s("%d", &x);
//	loc = search(x, a, sizeof(a) / sizeof(a[0]));
//	if (loc!=-1)
//		printf("%d在第%d个位置上\n", x, loc);
//
//	else
//		printf("%d不存在\n", x);
//
//	return 0;
//}


//int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes)//构造numberOfKnownPrimes以内的素数表
//{
//	int ret = 1;
//	int i;
//	for ( i = 0; i < numberOfKnownPrimes; i++)
//	{
//		if (x%knownPrimes[i] == 0)
//		{
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	const int number = 100;
//	int prime[100] = { 2 };
//	int count = 1;
//	int i = 3;
//	while (count<number)
//	{
//		if (isPrime(i, prime, count))
//		{
//			prime[count++] = i;
//		}
//		{
//			printf("i=%d\tcnt=%d\t", i, count);
//			int i;
//			for ( i = 0; i < number; i++)
//			{
//				printf("%d\t", prime[i]);
//			}
//			printf("\n");
//		}
//		i++;
//	}
//
//	for ( i = 0; i < number; i++)
//	{
//		printf("%d", prime[i]);
//		if ((i + 1) % 5) printf("\t");
//		else printf("\n");
//	}
//
//
//	return 0;
//}



//例2.4
/*int main()
{
double sign = -1.0;
double sum = 1.0;
double deno = 2.0;
double term;

while (deno<=100)
{
term = sign / deno;
sum = sum + term;
sign = -sign;
deno = deno + 1;
}

printf("sum=%lf", sum);

return 0;
}*/

//逗号运算符的应用，在for语句中

//int man()
//{
//	int i, j;
//	for (i = 0, j = 10; i<j; i++, j--)
//		printf("i=%dj=%d\n", i, j);
//
//	return 0;
//}