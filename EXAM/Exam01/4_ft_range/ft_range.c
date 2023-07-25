#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int		i;
	int		*buffer;

	if (min >= max)
		return (0);
	buffer = malloc(sizeof(int) * (max - min + 1));
	if (!buffer)
		return (0);
	i = -1;
	while (++i < max - min + 1)
		buffer[i] = min + i;
	return (buffer);
}
