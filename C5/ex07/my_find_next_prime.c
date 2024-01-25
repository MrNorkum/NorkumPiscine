/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_find_next_prime.c                                                     */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 09:00:05 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 09:00:06 by Mr. Norkum                   tg:mrnorkum */
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

int	my_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (1)
		if (my_is_prime(nb++))
			return (--nb);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_find_next_prime(12));
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
