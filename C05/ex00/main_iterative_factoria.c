int	ft_iterative_factorial(int nb)
{
	int	x;
	int	i;

	x = 1;
	i = 1;
	while (0 <= nb && nb <= 12)
	{
		while (++i <= nb)
			x *= i;
		return (x);
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_factorial(7));
}
