#include <stdio.h>

int main(void)
{
	int i, j, N, k;

	scanf("%d", &N);
	i = 1;
	while (i <= N)
	{
		k = i;
		while (k < N)
		{
			printf(" ");
			k++;
		}
		j = 0;
		while (j < i * 2 - 1)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	i = i - 2;
	while (i > 0)
	{
		k = i;
		while (k < N)
		{
			printf(" ");
			k++;
		}
		j = 0;
		while (j < i * 2 - 1)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i--;
	}
	return (0);
}
