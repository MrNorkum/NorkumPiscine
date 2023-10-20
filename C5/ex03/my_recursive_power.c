int	my_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	return (nb * my_recursive_power(nb, power - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_recursive_power(2, 7));
}
