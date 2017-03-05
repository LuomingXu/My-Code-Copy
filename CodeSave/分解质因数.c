#include<stdio.h>

int pan_duan(int x)
{
	int flag = 1;
	int i;
	for ( i=2 ; i < x; i++)
	{
		if (x%i == 0)
		{
			flag = 0;
		}
	}
	return flag;         //flag=1为素数
}

void fen_jie(int shu)
{
		for (int i = 2; i < shu; i++)
		{
			int flag = 1;
			for (int a = 2; a < i; a++)
			{
				if (i%a == 0)
				{
					flag = 0;
				}
			}
			if (flag == 1)
			{
				while (shu%i == 0)
				{
					printf("%dx", i);
					shu = shu / i;
					if ((pan_duan(shu) == 1) && (shu != 1))
					{
						printf("%d\n", shu);
						if ((pan_duan(shu) == 0)||(shu==i)) break;
					}
				}
				
			}
		}
}

int main()
{
	int shu;
	scanf_s("%d", &shu);

	if (pan_duan(shu) == 1)
	{
		printf("%d=%d\n", shu, shu);
	}

	else if (pan_duan(shu) == 0)
	{
		printf("%d=", shu);
		fen_jie(shu);
	}

	return 0;
}