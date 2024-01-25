/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_print_program_name.c                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 09:10:00 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 09:10:02 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	while (ac && *av[0] && write(1, av[0]++, 1))
		;
	write(1, "\n", 1);
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
