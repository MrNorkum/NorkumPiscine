int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb && i <= 46340)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (1)
		if (ft_is_prime(nb++))
			return (--nb);
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_find_next_prime(12));
}
