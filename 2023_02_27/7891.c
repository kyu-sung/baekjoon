#include<stdio.h>

int main(void)
{
	int a, b, N, i;

	scanf("%d", &N);
	i = 0;
	while (i < N)
	{
		scanf("%d\n%d", &a, &b);
		printf("%d\n", a + b);
		i++;
	}
	return (0);
}
