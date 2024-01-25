/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_recursive_factorial.c                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 08:59:12 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 08:59:14 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_recursive_factorial(int nb)
{
	if (!nb || nb == 1)
		return (1);
	else if (2 <= nb && nb <= 12)
		return (nb * my_recursive_factorial(nb - 1));
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_recursive_factorial(7));
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
