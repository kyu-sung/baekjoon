#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, M, i, j, k, *arr, m, n, K, *save;

	scanf("%d %d", &N, &M);
	arr = (int *)malloc(sizeof(int) * (N + 1));
	save = (int *)malloc(sizeof(int) * (N + 1));
	m = 0;
	while (m <= N)
	{
		arr[m] = m;
		save[m] = m;
		m++;
	}
	m = 0;
	while (m < M)
	{
		scanf("%d %d %d", &i, &j, &k);
		n = i;
		K = k;
		while (n <= j)
		{
			if (K <= j)
			{
				arr[n] = arr[K];
				K++;
			}
			else
			{
				arr[n] = save[i];
				i++;
			}
			n++;
		}
		m++;
		n = 1;
		while (n <= N)
		{
			save[n] = arr[n];
			n++;
		}
	}
	m = 1;
	while (m <= N)
	{
		printf("%d ", arr[m]);
		m++;
	}
	return (0);
}
