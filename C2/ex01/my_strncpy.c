/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strncpy.c                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:18:33 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:18:34 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

char	*my_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (src[++i] && i < n)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	d[] = "1234567890";
	char	s[] = "ABCDEFGH";

	printf("%s\n", my_strncpy(d, s, 5));
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
