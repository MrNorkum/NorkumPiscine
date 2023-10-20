#include <unistd.h>

void	my_print_numbers(void)
{
	int	x;

	x = 48;
	while (x <= 57 && write(1, &x, 1))
		x++;
}

void	my_print_numbers(void)
{
	write(1, "0123456789", 10);
}

int main(void)
{
	my_print_numbers();
}

//Hangisini kullanmak isterseniz onu kullanın.d
