#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	x;

	x = 97;
	while (x <= 122 && write(1, &x, 1))
		x++;
}

int main(void)
{
	ft_print_alphabet();
}
