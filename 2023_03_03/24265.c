#include<stdio.h>

long long MenOFPassion(long long n)
{
	long long sum, i, j;

	sum = 0;
	for (i = 1; i <= n - 1; i++)
	{
		for (j = i + 1; j <= n; j++)
		{
			sum++;
		}
	}
	return (sum);
}

int main(void)
{
	long long n;
	
	scanf("%lld", &n);
	printf("%lld\n%d\n", MenOFPassion(n), 2);
	return (0);
}
