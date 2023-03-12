#include<stdio.h>

int main(void)
{
	char str[101], cp[101];
	int i, len;

	scanf("%s", str);
	len = 0;
	while (str[len])
	{
		cp[len] = str[len];
		len++;
	}
	cp[len] = '\0';
	len--;
	i = 0;
	while (str[i])
	{
		if (str[i] != cp[len])
		{
			printf("0\n");
			return (0);
		}
		len--;
		i++;
	}
	printf("1\n");
	return (0);
}
