/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_str_is_printable.c                                                    */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:20:44 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:20:47 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_str_is_printable(char *str)
{
	while (*str)
		if (!(32 <= *str && *str++ <= 126))
			return (0);
	return (1);
}

#include <stdio.h>
int main(void)
{
	char str[] = "Mr. Norkum Was Here Xd";
	printf("%d\n", my_str_is_printable(str));
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
