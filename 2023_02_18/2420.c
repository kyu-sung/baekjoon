#include<stdio.h>

int main(void)
{
	long long N, M;
	
	scanf("%lld %lld", &N, &M);
	if (N - M < 0)
		N = (N - M) * -1;
	else
		N = N - M;
	printf("%lld", N);
	return (0);
}
