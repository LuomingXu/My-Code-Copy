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
	int temp, len, m, s, h/*UTC时间*/, H/*北京时间*/, y/*y是校验值*/;

	while (1)
	{
		scanf_s("%s", c, ele);
		start = clock();//计时开始
		if (!strcmp(c, "END"))  break; //输入END既结束
		if (strstr(c, "$GPRMC") == NULL) continue;
//不含$GPRMC 则等待再次输入；strstr，在字符串里检索字符串；返回：在 haystack 中第一次出现 needle 字符串的位置，如果未找到则返回 null。
		a = c; //指针指向$
		a = strchr(a, ',') + 1; //指针指向第一个逗号后的0
		a = strchr(a, ',') + 1; //指针指向第二个逗号后的A

		//如果未定位则等待再次输入
		if (a[0] != 'A') continue;

		p = strrchr(c, '*') + 1; //指针从右查找到*，P指向其后的数字,比strstr多了一个R表示从右侧开始
		sscanf_s(p, "%x", &y); //将P的值，转换为16进制数(%x将其转换)，赋予Y

		len = p - 1 - c - 1; //从*号到$号之间的字符个数
		e = c + 1; //$号后面的G开始

		temp = e[0]; // temp = 'G';
		for (int i = 0; i<len - 1; i++)
		{
			temp ^= e[i + 1]; //将$和*之间所有的字符做^运算
		}
		if (temp % 65536 == y)
		{
			//UTC时间，hhmmss.sss格式
			d = strchr(c, ',') + 1; //指向第一个逗号后的数字
			sscanf_s(d, "%2d", &h); //把2位字符以整数形式写入h
			d += 2; //指针向后移动2位
			sscanf_s(d, "%2d", &m); //把2位字符以整数形式写入m
			d += 2; //指针向后移动2位
			sscanf_s(d, "%2d", &s); //把2位字符以整数形式写入s

			//把UTC时间，还算成北京时间（UTC+8 东八区）
			if (h + 8 >= 24)
				H = h + 8 - 24;
			else
				H = h + 8;
		}

	}
	printf("%02d:%02d:%02d\n", H, m, s);
	system("pause");

	finish = clock();//计时结束
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("Time: %fms\n", duration * 1000);

	return 0;
}