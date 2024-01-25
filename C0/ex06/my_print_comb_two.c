/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_print_comb_two.c                                                      */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 02:47:25 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 02:47:26 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char x)
{
	write(1, &x, 1);
}

void	my_print_comb_two(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			my_putchar(a / 10 + 48);
			my_putchar(a % 10 + 48);
			my_putchar(32);
			my_putchar(b / 10 + 48);
			my_putchar(b % 10 + 48);
			write(1, ", ", 2 * (a != 98));
			b++;
		}
		a++;
	}
}

int main(void)
{
	my_print_comb_two();
}

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
