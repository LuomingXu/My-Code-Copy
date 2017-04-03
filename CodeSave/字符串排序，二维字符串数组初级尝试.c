#include<stdio.h>
#include<string.h>
#include<time.h>

clock_t start, finish;
double duration;

void sort(char p[][10], int n)
{
	char temp[1][10];
	int i, j, k;
	for (i = 0; i<n; i++)
	{
		k = i;
		for (j = i; j < n; ++j)
		{
			if (strcmp(*(p + k), *(p + j)) == 1)
				k = j;
		}

		if (k != j)
		{
			strcpy_s(*temp, 10, *(p + k));
			strcpy_s(*(p + k), 10, *(p + i));
			strcpy_s(*(p + i), 10, *temp);
		}
	}
}

int main()
{
	start = clock();

	char courses[][10] = { "C","C++","PHP","ASP","ASP.NET","C#","JAVA","BASIC","PASCAL","COBOL" };
	int n = sizeof(courses) / sizeof(courses[0]);

	sort(courses, n);
	int i;
	for (i = 0; i<n; ++i)
		printf("%s\n", courses[i]);

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("Time%.8fms\n", duration);

	return 0;
}