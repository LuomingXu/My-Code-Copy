#include<stdio.h>

int man()
{
	int i, j;
	for (i = 0, j = 10; i<j; i++, j--)
		printf("i=%dj=%d\n", i, j);

	return 0;
}