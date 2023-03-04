#include <stdio.h>

int main(void)
{
	int N, res, i;

	scanf("%d", &N);
	res = 0;
	i = 0;
	while (i <= N)
	{
		if (i / 125 && !(i % 125))
			res += 3;
		else if ((i / 100 && !(i % 100)) || (i / 25 && !(i % 25)))
			res += 2;
		else if (i / 5 && !(i % 5))
			res += 1;
		i++;
	}
	printf("%d\n", res);
	return (0);
}
