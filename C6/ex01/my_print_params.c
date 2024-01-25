/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_print_params.c                                                        */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 09:10:07 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 09:10:09 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;

	a = 0;
	while (++a < ac)
	{
		while (*av[a] && write(1, av[a]++, 1))
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
