#include <unistd.h>

void	my_print_reverse_alphabet(void)
{
	int	x;

	x = 122;
	while (x >= 97 && write(1, &x, 1))
		x--;
}

void	my_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

int main(void)
{
	my_print_reverse_alphabet();
}

//Hangisini kullanmak isterseniz onu kullanın.d
