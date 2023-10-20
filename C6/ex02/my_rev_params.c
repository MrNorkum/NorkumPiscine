#include <unistd.h>

int	main(int ac, char **av)
{
	while (--ac)
	{
		while (*av[ac] && write(1, av[ac]++, 1))
			;
		write(1, "\n", 1);
	}
}
