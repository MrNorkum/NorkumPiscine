/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_is_prime.c                                                            */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 08:59:55 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 08:59:57 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (++i <= 46340 && i * i <= nb)
		if (nb % i == 0)
			return (0);
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_is_prime(13));
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
