/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strcat.c                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:52:25 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:54:54 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

char	*my_strcat(char *dest, char *src)
{
	int	d;
	int	i;

	i = -1;
	d = -1;
	while (dest[++d])
		;
	while (src[++i])
		dest[d + i] = src[i];
	return (dest[d + i] = '\0', dest);
}

#include <stdio.h>

int	main(void)
{
	char	dest[27] = "Mr. Norkum";
	char	src[] = " Was Here Xd";

	printf("%s\n", my_strcat(dest, src));
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
