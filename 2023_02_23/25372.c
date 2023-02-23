#include<stdio.h>

char arr[21];

int main(void)
{
	int N, i, len;

	scanf("%d", &N);
	i = 0;
	while (i < N)
	{
		scanf("%s", arr);
		len = 0;
		while (arr[len])
			len++;
		if (len >= 6 && len <= 9)
			printf("yes\n");
		else
			printf("no\n");
		i++;
	}
	return (0);
}
