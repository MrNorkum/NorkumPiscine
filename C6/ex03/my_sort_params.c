#include <unistd.h>

void	my_putendl(char *str)
{
	while (*str && write(1, str++, 1))
		;
	write(1, "\n", 1);
}

int	my_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	my_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int		a;
	int		x;

	x = ac;
	while (--x)
	{
		a = 0;
		while (++a < x)
			if (my_strcmp(av[a], av[a + 1]) > 0)
				my_swap(&av[a], &av[a + 1]);
	}
	a = 0;
	while (++a < ac)
		my_putendl(av[a]);
}
