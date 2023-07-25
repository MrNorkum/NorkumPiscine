#include <unistd.h>
int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 3)
	{
		for (int j = 0; av[1][i] && av[2][j]; j++)
			if (av[1][i] == av[2][j])
				i++;
		if (!av[1][i])
			write(1, av[1], i);
	}
	write(1, "\n", 1);
}
