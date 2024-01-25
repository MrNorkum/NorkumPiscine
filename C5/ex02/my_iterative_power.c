/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_iterative_power.c                                                     */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 08:59:18 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 08:59:20 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_iterative_power(int nb, int power)
{
	int	r;

	r = (power >= 0);
	while (r && power--)
		r *= nb;
	return (r);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_iterative_power(2, 7));
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
