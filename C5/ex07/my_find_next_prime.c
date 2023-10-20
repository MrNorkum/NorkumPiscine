int	my_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (++i <= 46340 && i * i <= nb)
		if (nb % i == 0)
			return (0);
	return (1);
}

int	my_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (1)
		if (my_is_prime(nb++))
			return (--nb);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_find_next_prime(12));
}
