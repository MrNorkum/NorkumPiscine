/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_str_is_lowercase.c                                                    */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:19:49 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:19:50 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_str_is_lowercase(char *str)
{
	while (*str)
		if (!('a' <= *str && *str++ <= 'z'))
			return (0);
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "mrnorkumwasherexd";

	printf("%d\n", my_str_is_lowercase(str));
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
