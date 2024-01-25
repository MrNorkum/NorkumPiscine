/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strlcat.c                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 08:54:55 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 08:54:57 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

unsigned int	my_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = -1;
	d = my_strlen(dest);
	s = my_strlen(src);
	if (!size || size <= d)
		return (s + size);
	while (src[++i] && i < size - d - 1)
		dest[d + i] = src[i];
	return (dest[d + i] = '\0', d + s);
}

#include <stdio.h>

int	main(void)
{
	char	dest[23] = "Mr. Norkum ";
	char	src[] = "Was Here Xd";

	printf("%d | %s\n", my_strlcat(dest, src, 23), dest);
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
