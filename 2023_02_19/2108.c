#include<stdio.h>

int sort[8001];

int main(void)
{
	long long r1, N, mod;
	int r2;
	int i, input, cnt, log, log_2;

	scanf("%lld", &N);
	r1 = 0;
	i = 0;
	while (i < N)
	{
		scanf("%d", &input);
		sort[input + 4000]++;
		r1 = r1 + input;
		i++;
	}
	mod = r1 % N;
	r1 = (r1 / N);
	if (mod > 0 && mod * 2 >= N)
		r1++;
	else if (mod < 0 && mod * -2 > N)
		r1--;
	printf("%lld\n", r1);
	r2 = N / 2;
	cnt = 0;
	i = 0;
	while (i <= 8000)
	{
		cnt = cnt + sort[i];
		if (cnt > r2)
		{
			printf("%d\n", i - 4000);
			break ;
		}
		i++;
	}
	log = 0;
	cnt = 0;
	i = 8000;
	while (i >= 0)
	{
		if (sort[i] >= cnt && sort[i] != 0)
		{
			cnt = sort[i];
			log_2 = log;
			log = i;
		}
		i--;
	}
	if (sort[log] == sort[log_2])
		log = log_2;
	printf("%d\n", log - 4000);
	log = -1;
	log_2 = -1;
	i = 8000;
	while (i >= 0)
	{
		if (sort[i] != 0 && log_2 == -1)
		{
			log_2 = i;
		}
		if (sort[i] != 0)
			log = i;
		i--;
	}
	printf("%d\n", log_2 - log);
	return (0);
}
