#include <stdio.h>

int main(void)
{
	int N, i, j, k, flag, res;
	char str[101], save;

	scanf("%d", &N);
	save = 0;
	res = 0;
	i = 0;
	while (i < N)
	{
		scanf("%s", str);
		flag = 0;
		j = 0;
		while (str[j])
		{
			k = j;
			save = str[k];
			while (str[k])
			{
				if (save != str[k] && save == str[k + 1])
					flag++;
				k++;
			}
			j++;
		}
		if (flag == 0)
			res++;
		i++;
	}
	printf("%d\n", res);
	return (0);
}
