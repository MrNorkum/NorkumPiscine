/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_print_reverse_alphabet.c                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/10 20:39:31 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/10 20:39:33 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

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

//İkiside aynı çalışır inceleyin kullanın.

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */


