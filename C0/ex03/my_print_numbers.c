/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_print_numbers.c                                                       */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/10 20:40:00 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/10 20:40:01 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

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
