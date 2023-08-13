int	ft_sqrt(int nb)
{
	long	r;

	r = 0;
	while (++r <= 46340 && r * r <= nb)
		if (r * r == nb)
			return (r);
	return (0);
}


#include <stdio.h>
int main(void)
{
	printf("%d", ft_sqrt(169));
}
