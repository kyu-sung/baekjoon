#include<stdio.h>

int stack[10002];
char com[6];

int main(void)
{
	int N, i, num, j;

	scanf("%d", &N);
	j = 10001;
	i = 0;
	while (i < N)
	{
		scanf("%s", com);
		if (com[0] == 'p' && com[1] == 'u')
		{
			j--;
			scanf("%d", &num);
			stack[j] = num;
		}
		if (com[0] == 't')
		{
			if (stack[j] == 0)
				printf("-1\n");
			else
				printf("%d\n", stack[j]);
		}
		if (com[0] == 's')
		{
			printf("%d\n", 10001 - j);
		}
		if (com[0] == 'e')
		{
			if (j == 10001)
				printf("1\n");
			else
				printf("0\n");
		}
		if (com[0] == 'p' && com[1] == 'o')
		{
			if (j == 10001)
				printf("-1\n");
			else
			{
				printf("%d\n", stack[j]);
				stack[j] = 0;
				j++;
			}
		}
		i++;
	}
	return (0);
}
