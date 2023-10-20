int	my_sqrt(int nb)
{
	long	i;

	i = 0;
	while (++i <= 46340 && i * i <= nb)
		if (i * i == nb)
			return (i);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_sqrt(169));
}
