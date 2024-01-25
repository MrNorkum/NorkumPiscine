/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_rev_params.c                                                          */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 09:10:14 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 09:10:16 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	while (--ac)
	{
		while (*av[ac] && write(1, av[ac]++, 1))
			;
		write(1, "\n", 1);
	}
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
