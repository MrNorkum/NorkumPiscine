int	my_recursive_factorial(int nb)
{
	if (!nb || nb == 1)
		return (1);
	else if (2 <= nb && nb <= 12)
		return (nb * my_recursive_factorial(nb - 1));
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_recursive_factorial(7));
}
