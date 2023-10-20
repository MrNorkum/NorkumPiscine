#include <unistd.h>

int	main(int ac, char **av)
{
	while (ac && *av[0] && write(1, av[0]++, 1))
		;
	write(1, "\n", 1);
}
