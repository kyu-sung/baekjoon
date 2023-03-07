#include <stdio.h>

int main(void)
{
	int N, M, i, j, k, arr[101];

	scanf("%d %d", &N, &M);
	i = 0;
	while (i <= N)
	{
		arr[i] = i;
		i++;
	}
	k = 0;
	while (k < M)
	{
		scanf("%d %d", &i, &j);
		int temp;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		k++;
	}
	k = 1;
	while (k <= N)
	{
		printf("%d ", arr[k]);
		k++;
	}
	return (0);
}
