/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_is_negative.c                                                         */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/10 20:40:25 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/10 20:40:26 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <unistd.h>

void	my_is_negative(int n)
{
	write(1, "P", !(n < 0));
	write(1, "N", (n < 0));
}

void	my_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

int main(void)
{
	my_is_negative(-42);
	my_is_negative(0);
	my_is_negative(42);
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
