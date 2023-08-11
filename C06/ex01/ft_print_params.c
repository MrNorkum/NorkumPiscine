#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;

	a = 0;
	while (++a < ac)
	{
		while (*av[a])
			write(1, av[a]++, 1);
		write(1, "\n", 1);
	}
}
