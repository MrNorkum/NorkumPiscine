/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_sqrt.c                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 08:59:46 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 08:59:48 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_sqrt(int nb)
{
	long	i;

	i = 0;
	while (++i <= 46340 && i * i <= nb)
		if (i * i == nb)
			return (i);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_sqrt(169));
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
