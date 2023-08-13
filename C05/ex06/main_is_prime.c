int	ft_is_prime(int nb)
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

#include <stdio.h>
int main(void)
{
	printf("%d", ft_is_prime(13));
}
