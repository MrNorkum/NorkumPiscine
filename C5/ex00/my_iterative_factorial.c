/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_iterative_factorial.c                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 08:59:02 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 08:59:04 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_iterative_factorial(int nb)
{
	int	x;

	x = (0 <= nb && nb <= 12);
	while (x && nb)
		x *= nb--;
	return (x);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_iterative_factorial(7));
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
