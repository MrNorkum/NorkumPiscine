int	ft_iterative_power(int nb, int power)
{
	int r;

	r = (power >= 0);
	while (r && power--)
	    r *= nb;
	return (r);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_power(2, 7));
}
