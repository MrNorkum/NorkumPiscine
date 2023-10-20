#include <unistd.h>

void	my_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		my_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

#include <stdio.h>
int main(void)
{
	my_putnbr(-1348);
}
