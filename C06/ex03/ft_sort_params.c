#include <unistd.h>

void	ft_putstrnl(char *str)
{
	while (*str && write(1, str++, 1))
		;
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1++ == *s2++)
		;
	return (*--s1 - *--s2);
}

void	ft_swap(char **a, char **b)
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

	x = 0;
	while (++x < ac - 1)
	{
		a = 0;
		while (++a < ac - 1)
			if (ft_strcmp(av[a], av[a + 1]) > 0)
				ft_swap(&av[a], &av[a + 1]);
	}
	a = 0;
	while (++a < ac)
		ft_putstrnl(av[a]);
}
