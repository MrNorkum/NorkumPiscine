#include <stdlib.h>

int	my_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (*range = 0, 0);
	range[0] = malloc(sizeof(int) * (max - min));
	if (!range[0])
		return (*range = 0, -1);
	i = -1;
	while (++i < max - min)
		range[0][i] = min + i;
	return (max - min);
}

#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;
	int	size;

	i = -1;
	size = my_ultimate_range(&arr, 0, 10);
	while (++i < size)
		printf("%d", arr[i]);
	free(arr);
}
