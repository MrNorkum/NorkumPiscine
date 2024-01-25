/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strlcpy.c                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:23:02 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:23:04 by Mr. Norkum                   tg:mrnorkum */
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

unsigned int	my_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = -1;
	if (size != 0)
	{
		while (src[++i] && i < size - 1)
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (my_strlen(src));
}

#include <stdio.h>

int	main(void)
{
	char	dest[] = "1234567890";
	char	src[] = "Mr. Norkum Was Here Xd";

	printf("%d | %s\n", my_strlcpy(dest, src, 11), dest);
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
