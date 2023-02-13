#include<stdio.h>

int main(void)
{
	int	L;

	scanf("%d", &L);
	L = ((L - 1) / 5) + 1;
	printf("%d", L);
	return (0);
}
