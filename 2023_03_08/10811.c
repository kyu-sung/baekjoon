#include <stdio.h>

int main(void)
{
	int arr[101], N, M, i, j, k;

	scanf("%d %d", &N, &M);
	i = 0;
	while (i <= 100)
	{
		arr[i] = i;
		i++;
	}
	k = 0;
	while (k < M)
	{
		scanf("%d %d", &i, &j);
		while (i <= j)
		{
			int temp;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
		k++;
	}
	i = 1;
	while (i <= N)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
