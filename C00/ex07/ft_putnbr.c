#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void	ft_putnbr(int nb)
{
    long    n;
    
    n = nb;
    write(1, "-", (n < 0));
    n *= !(n < 0) - (n < 0);
    if (n > 9)
       ft_putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

//Hangisi kolayınıza geliyorsa onu kullanın.d
