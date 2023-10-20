#include <unistd.h>

void	my_is_negative(int n)
{
	write(1, "P", !(n < 0));
	write(1, "N", (n < 0));
}

void	my_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

int main(void)
{
	my_is_negative(-42);
	my_is_negative(0);
	my_is_negative(42);
}

//İstediğinizi kullanabilirsiniz.d
