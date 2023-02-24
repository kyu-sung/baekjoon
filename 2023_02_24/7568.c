#include<stdio.h>

int x[51], y[51], res[51];

int main(void)
{
	int N, i, j;

	scanf("%d", &N);
	i = 1;
	while (i <= N)
	{
		scanf("%d %d", &x[i], &y[i]);
		i++;
	}
	i = 1;
	while (i <= N)
	{
		j = 1;
		while (j <= N)
		{
			if (x[i] < x[j] && y[i] < y[j])
				res[i]++;
			j++;
		}
		i++;
	}
	i = 1;
	while (i <= N)
	{
		printf("%d", res[i] + 1);
		if (i == N)
			break;
		printf(" ");
		i++;
	}
	return (0);
}
