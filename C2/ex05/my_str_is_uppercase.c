/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_str_is_uppercase.c                                                    */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:20:20 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:20:22 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_str_is_uppercase(char *str)
{
	while (*str)
		if (!('A' <= *str && *str++ <= 'Z'))
			return (0);
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "MRNORKUMWASHEREXD";

	printf("%d\n", my_str_is_uppercase(str));
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
