#include <unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = 48;
	while (x <= 57 && write(1, &x, 1))
		x++;
}

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

//Hangisini kullanmak isterseniz onu kullanın.d
