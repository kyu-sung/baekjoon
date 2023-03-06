#include <stdio.h>

int main(void)
{
	int N[101] = {0}, n, m, i, j, k;

	scanf("%d %d", &n, &m);
	int b = 0;
	while (b < m)
	{
		scanf("%d %d %d", &i, &j, &k);
		while (i <= j)
		{
			N[i] = k;
			i++;
		}
		b++;
	}
	int a = 1;
	while (a <= n)
	{
		printf("%d ", N[a]);
		a++;
	}
	return (0);
}
