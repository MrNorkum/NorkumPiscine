/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strlowcase.c                                                          */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:22:18 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:22:19 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

char	*my_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] += ('A' <= str[i] && str[i] <= 'Z') * 32;
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Mr. Norkum Was Here Xd";

	printf("%s\n", my_strlowcase(str));
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
