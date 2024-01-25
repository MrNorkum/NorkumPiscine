/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strupcase.c                                                           */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:21:46 by Mr. Norkum                               */
/*   Updated: 2024/01/11 15:21:47 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

char	*my_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] -= ('a' <= str[i] && str[i] <= 'z') * 32;
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Mr. Norkum Was Here Xd";

	printf("%s\n", my_strupcase(str));
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
