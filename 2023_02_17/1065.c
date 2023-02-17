#include<stdio.h>

void ft_X(int i, int *cnt)
{
	int a, b, c;
	a = i / 100 % 10;
	b = i / 10 % 10;
	c = i % 10;
	if (i == 1000)
		return ;
	if (i >= 100 && a - b == b - c)
		(*cnt)++;
	if (i >= 1 && i <= 99)
		(*cnt)++;
}

int main(void)
{
	int i, N, init;
	int *cnt;

	init = 0;
	cnt = &init;
	scanf("%d", &N);
	i = 1;
	while (i <= N)
	{
		ft_X(i, cnt);
		i++;
	}
	printf("%d", *cnt);
	return (0);
}
