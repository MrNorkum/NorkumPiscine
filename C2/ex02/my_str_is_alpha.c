/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_str_is_alpha.c                                                        */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:19:00 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:19:01 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "MrNorkumWasHereXd";

	printf("%d\n", my_str_is_alpha(str));
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
