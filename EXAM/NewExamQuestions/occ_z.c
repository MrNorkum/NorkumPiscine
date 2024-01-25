
//Function
int	occ_z(char *str)
{
	int counter = 0;
	while(*str)
	{
		if (*str == 'z')
			counter++;
		str++;
	}
	return (counter);
}


//Program
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}
int	main(int ac, char **av)
{
	int i = 0;
	int counter = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] == 'z')
				counter++;
			i++;
		}
		ft_putnbr(counter);
	}
	write(1, "\n", 1);
}
