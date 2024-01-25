/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_recursive_power.c                                                     */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 08:59:28 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 08:59:32 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	return (nb * my_recursive_power(nb, power - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_recursive_power(2, 7));
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
