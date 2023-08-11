int	ft_iterative_power(int nb, int power)
{
	int r;

	r = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
	    r *= nb;
	return (r);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_power(2, 7));
}
