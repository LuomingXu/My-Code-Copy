#include <stdio.h>
#include<time.h>
#include<Windows.h>
#define ele 1000

int main() 
{

	clock_t start, finish;
	double duration;



	char c[ele];
	char *a, *p, *e, *d;
	int temp, len, m, s, h/*UTCʱ��*/, H/*����ʱ��*/, y/*y��У��ֵ*/;

	while (1)
	{
		scanf_s("%s", c, ele);
		start = clock();//��ʱ��ʼ
		if (!strcmp(c, "END"))  break; //����END�Ƚ���
		if (strstr(c, "$GPRMC") == NULL) continue;
//����$GPRMC ��ȴ��ٴ����룻strstr�����ַ���������ַ��������أ��� haystack �е�һ�γ��� needle �ַ�����λ�ã����δ�ҵ��򷵻� null��
		a = c; //ָ��ָ��$
		a = strchr(a, ',') + 1; //ָ��ָ���һ�����ź��0
		a = strchr(a, ',') + 1; //ָ��ָ��ڶ������ź��A

		//���δ��λ��ȴ��ٴ�����
		if (a[0] != 'A') continue;

		p = strrchr(c, '*') + 1; //ָ����Ҳ��ҵ�*��Pָ����������,��strstr����һ��R��ʾ���Ҳ࿪ʼ
		sscanf_s(p, "%x", &y); //��P��ֵ��ת��Ϊ16������(%x����ת��)������Y

		len = p - 1 - c - 1; //��*�ŵ�$��֮����ַ�����
		e = c + 1; //$�ź����G��ʼ

		temp = e[0]; // temp = 'G';
		for (int i = 0; i<len - 1; i++)
		{
			temp ^= e[i + 1]; //��$��*֮�����е��ַ���^����
		}
		if (temp % 65536 == y)
		{
			//UTCʱ�䣬hhmmss.sss��ʽ
			d = strchr(c, ',') + 1; //ָ���һ�����ź������
			sscanf_s(d, "%2d", &h); //��2λ�ַ���������ʽд��h
			d += 2; //ָ������ƶ�2λ
			sscanf_s(d, "%2d", &m); //��2λ�ַ���������ʽд��m
			d += 2; //ָ������ƶ�2λ
			sscanf_s(d, "%2d", &s); //��2λ�ַ���������ʽд��s

			//��UTCʱ�䣬����ɱ���ʱ�䣨UTC+8 ��������
			if (h + 8 >= 24)
				H = h + 8 - 24;
			else
				H = h + 8;
		}

	}
	printf("%02d:%02d:%02d\n", H, m, s);
	system("pause");

	finish = clock();//��ʱ����
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("Time: %fms\n", duration * 1000);

	return 0;
}