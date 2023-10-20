#include <unistd.h>

void	my_print_alphabet(void)
{
	int	x;

	x = 97;
	while (x <= 122 && write(1, &x, 1))
		x++;
}

void	my_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int main(void)
{
	my_print_alphabet();
}

//Hangisini kullanmak isterseniz onu kullanın.d
