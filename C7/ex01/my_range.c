#include <stdlib.h>

int	*my_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (0);
	arr = malloc(sizeof(int) * (max - min));
	if (!arr)
		return (0);
	i = -1;
	while (++i < max - min)
		arr[i] = min + i;
	return (arr);
}

#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;

	arr = my_range(0, 10);
	i = 0;
	while (i < 10)
		printf("%d", arr[i++]);
	free(arr);
}
