#include <stdio.h>
#include<time.h>
#include<Windows.h>

int main(int argc, char const *argv[])
{
	clock_t start, finish;
	double duration;


	int b = 0, weishu = 0, shang = 0, count = 0;

	scanf_s("%d/%d", &weishu, &b);
	start = clock();//��ʱ��ʼ
	printf("0.");
//while��for������ʽ���ڼ���16/19ʱwhile��2ms
	while (count != 200)
	{
		weishu *= 10;
		if (weishu<b)
		{
			weishu *= 10;
			printf("0");
			count++;
		}
		shang = weishu / b;
		weishu %= b;
		printf("%d", shang);
		if (weishu == 0)
			break;
		count++;
	}

	for (; count != 200; count++)
	{
		weishu *= 10;
		if (weishu<b)
		{
			weishu *= 10;
			printf("0");
			count++;
		}
		shang = weishu / b;
		weishu %= b;
		printf("%d", shang);
		if (weishu == 0)
			break;
	}

	printf("\n");

	finish = clock();//��ʱ����
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("Time: %fms\n", duration*1000);

	return 0;
}