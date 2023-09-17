#include <unistd.h>

void	ft_is_negative(int n)
{
	write(1, "P", !(n < 0));
	write(1, "N", (n < 0));
}

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

//İstediğinizi kullanabilirsiniz.d
