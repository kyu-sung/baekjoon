#include <stdio.h>

int main(void)
{
	int N, i;

	scanf("%d", &N);
	if (N % 4)
		N = N + 3;
	i = 0;
	while (i < N / 4)
	{
		printf("long ");
		i++;
	}
	printf("int\n");
	return (0);
}
