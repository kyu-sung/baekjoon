#include <stdio.h>

int main(void)
{
	long long N, save_N;
	long long i, res;

	scanf("%lld", &N);
	if (N == 0 || N == 1)
	{
		printf("1");
		return (0);
	}
	save_N = N;
	res = N;
	i = 1;
	while (i < save_N)
	{
		N--;
		res = res * N;
		i++;
	}
	printf("%lld", res);
	return (0);
}
