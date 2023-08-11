#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;

	x = 47;
	while (++x <= 57)
		write(1, &x, 1);
}
