#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	x;

	x = 96;
	while (++x <= 122)
		write(1, &x, 1);
}
