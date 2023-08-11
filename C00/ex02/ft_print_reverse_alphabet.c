#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	x;

	x = 123;
	while (--x >= 97)
		write(1, &x, 1);
}
