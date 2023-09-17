int	ft_iterative_factorial(int nb)
{
	int	x;
	int	i;

	x = 1;
	i = 1;
	while (0 <= nb && nb <= 12 && ++i <= nb)
		x *= i;
	return ((0 <= nb && nb <= 12) * x);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_factorial(7));
}
