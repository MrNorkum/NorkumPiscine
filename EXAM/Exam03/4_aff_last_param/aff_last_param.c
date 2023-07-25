#include <unistd.h>
int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 0; av[ac - 1][i]; i++)
			write(1, &av[ac - 1][i], 1);
	}
	write(1, "\n", 1);
}
