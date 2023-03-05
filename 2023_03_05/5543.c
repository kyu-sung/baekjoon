#include <stdio.h>

int main(void)
{
	int arr[5], i, min_burger, min_drink;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	min_burger = arr[0];
	if (arr[0] > arr[1])
		min_burger = arr[1];
	if (min_burger > arr[2])
		min_burger = arr[2];
	min_drink = arr[3];
	if (arr[3] > arr[4])
		min_drink = arr[4];
	printf("%d\n", min_burger + min_drink - 50);
	return (0);
}
