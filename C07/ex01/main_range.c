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

#include <stdio.h>
int main(void)
{
	int *tab = ft_range(0, 10);
	int i = 0;
	while (i < 10)
		printf("%d", tab[i++]);
}
