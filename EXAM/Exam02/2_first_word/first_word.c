#include <unistd.h>
int	main(int ac, char **av)
{
	int i;
	if (ac == 2)
	{
		for (i = 0; av[1][i] == 32 || av[1][i] == '\t'; i++);
		for (; av[1][i] && av[1][i] != 32 && av[1][i] != '\t'; i++)
			write(1, &av[1][i], 1);
	}
	write(1, "\n", 1);
}