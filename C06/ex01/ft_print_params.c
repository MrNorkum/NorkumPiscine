#include <unistd.h>

int	main(int ac, char **av)
{
	int	x;

	x = 0;
	while (++x < ac)
	{
		while (*av[x])
			write(1, av[x]++, 1);
		write(1, "\n", 1);
	}
}
