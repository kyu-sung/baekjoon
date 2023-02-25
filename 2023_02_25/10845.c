#include<stdio.h>

int queue[10002];
char com[6];

int main(void)
{
	int N, i, num, j, k;

	scanf("%d", &N);
	k = 1;
	j = 1;
	i = 0;
	while (i < N)
	{
		scanf("%s", com);
		if (com[0] == 'p' && com[1] == 'u')
		{
			scanf("%d", &num);
			queue[j] = num;
			j++;
		}
		if (com[0] == 'f')
		{
			if (queue[k] == 0)
				printf("-1\n");
			else
				printf("%d\n", queue[k]);
		}
		if (com[0] == 'b')
		{
			if (queue[j - 1] == 0)
				printf("-1\n");
			else
				printf("%d\n", queue[j - 1]);
		}
		if (com[0] == 's')
		{
			printf("%d\n", j - k);
		}
		if (com[0] == 'e')
		{
			if (j == 0 || k >= j)
				printf("1\n");
			else
				printf("0\n");
		}
		if (com[0] == 'p' && com[1] == 'o')
		{
			if (j == 0 || k >= j)
				printf("-1\n");
			else
			{
				printf("%d\n", queue[k]);
				queue[k] = 0;
				k++;
			}
		}
		i++;
	}
	return (0);
}
