#include <stdio.h>

char arr[5][16];

int main(void)
{
	int i, j;

	i = 0;
	while (i < 5)
	{
		scanf("%s", arr[i]);
		i++;
	}
	j = 0;
	while (j < 15)
	{
		i = 0;
		while (i < 5)
		{
			if (arr[i][j])
			{
				printf("%c", arr[i][j]);
			}
			i++;
		}
		j++;
	}
	return (0);
}
