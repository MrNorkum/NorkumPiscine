/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_print_alphabet.c                                                      */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/10 20:39:01 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/10 20:39:03 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

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
