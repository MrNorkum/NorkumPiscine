#include <unistd.h>

void	ft_is_negative(int n)
{
	write(1, "P", !(n < 0));
	write(1, "N", (n < 0));
}

int main(void)
{
	ft_is_negative(-42);
	ft_is_negative(0);
	ft_is_negative(42);
}
