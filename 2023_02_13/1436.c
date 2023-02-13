#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* shom;
	int i;
	int N;
	int cnt;

	scanf("%d", &N);
	shom = (int*)malloc(sizeof(int) * 10000000);
	if (shom == NULL)
		return (0);
	i = 0;
	while (i < 10000000)
	{
		shom[i] = i;
		if (!((i % 1000) == 666 || (i / 10 % 1000) == 666 || (i / 100 % 1000) == 666 || (i / 1000 % 1000) == 666))
			shom[i] = 0;
		i++;
	}
	cnt = 0;
	i = 0;
	while (i < 10000000)
	{
		if (shom[i] != 0)
			cnt++;
		if (cnt == N)
			break;
		i++;
	}
	printf("%d", shom[i]);
	free(shom);
	return (0);
}
