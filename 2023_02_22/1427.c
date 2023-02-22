#include<stdio.h>

char num[11];

int main(void)
{
	int i, j, len;

	scanf("%s", num);
	len = 0;
	while (num[len])
		len++;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (num[j] && num[j + 1])
		{
			if (num[j] < num[j + 1])
			{
				char temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
			j++;
		}
		i++;
	}
	printf("%s", num);
	return (0);
}
