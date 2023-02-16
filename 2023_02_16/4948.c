#include<stdio.h>

int prime[250000];

int main(void)
{
	int i, j, n, cnt;

	i = 2;
	while (i < 250000)
	{
		prime[i] = i;
		i++;
	}
	i = 2;
	while (i < 250000)
	{
		if (prime[i] != 0)
		{
			j = i + i;
			while (j < 250000)
			{
				prime[j] = 0;
				j = j + i;
			}
		}
		i++;
	}
	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break ;
		cnt = 0;
		i = n;
		while (i < n * 2)
		{
			i++;
			if (prime[i] != 0)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return (0);
}
