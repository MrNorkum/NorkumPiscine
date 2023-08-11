#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	range[0] = malloc(sizeof(int) * (max - min));
	if (!range[0])
	{
		*range = 0;
		return (-1);
	}
	i = -1;
	while (++i < max - min)
		range[0][i] = min + i;
	return (max - min);
}
