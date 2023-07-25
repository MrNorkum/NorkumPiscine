#include <unistd.h>
void	ft_putnbr(int n)
{
	char	c;
	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			write(1, "fizz", 4);
		if (i % 5 == 0)
			write(1, "buzz", 4);
		if (i % 3 != 0 && i % 5 != 0)
			ft_putnbr(i);
		write(1, "\n", 1);
	}
}
