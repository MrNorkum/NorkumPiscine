#include <unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = 48;
	while (x <= 57 && write(1, &x, 1))
		x++;
}

int main(void)
{
	ft_print_numbers();
}
