#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*buf;

	if (min >= max)
		return (0);
	buf = malloc(sizeof(int) * (max - min));
	if (!buf)
		return (0);
	i = -1;
	while (++i < max - min)
		buf[i] = min + i;
	return (buf);
}
