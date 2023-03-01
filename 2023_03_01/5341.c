#include<stdio.h>

int main(void)
{
	int n, i, sum;

	n = -1;
	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break ;
		i = n;
		sum = 0;
		while (i >= 1)
		{
			sum = sum + i;
			i--;
		}
		printf("%d\n", sum);
	}
	return (0);
}
