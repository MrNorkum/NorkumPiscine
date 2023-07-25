#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		for (int i = 0; av[1][i]; i++)
		{
			if((av[1][i] >= 'A' && av[1][i] <= 'Y') || (av[1][i] >= 'a' && av[1][i] <= 'y'))
				av[1][i] += 1;
			else if((av[1][i] == 'Z') || (av[1][i] == 'z'))
				av[1][i] -= 25;
			write(1, &av[1][i], 1);
		}
	}
	write(1, "\n", 1);
}
