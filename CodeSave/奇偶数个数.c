#include<stdio.h>

int main()
{
	int x;
	int ou = 0;
	int ji = 0;
	int t;

	printf("������һ������������������-1��\n");
	scanf_s("%d", &x);

	while (x!=-1)
	{	
		t = x % 2;

		if (t==0)
		{
			ou = ou + 1;
		}
		else if (t == 1)
		{
			ji = ji + 1;
		}

		printf("������һ������������������-1��\n");
		scanf_s("%d", &x);
	}

	printf("ż����%d����������%d��", ou, ji);

	return 0;
}