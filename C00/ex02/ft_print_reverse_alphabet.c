#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	x;

	x = 122;
	while (x >= 97 && write(1, &x, 1))
		x--;
}

void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

//Hangisini kullanmak isterseniz onu kullanın.d
