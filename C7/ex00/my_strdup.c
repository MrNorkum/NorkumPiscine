/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strdup.c                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 09:13:17 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 09:13:18 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <stdlib.h>

int	my_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*my_strdup(char *src)
{
	int		i;
	char	*dest;

	i = -1;
	dest = malloc(sizeof(char) * my_strlen(src) + 1);
	if (!dest)
		return (0);
	while (src[++i])
		dest[i] = src[i];
	return (dest[i] = '\0', dest);
}

#include <stdio.h>

int	main(void)
{
	char	*str;

	str = my_strdup("Mr. Norkum");
	printf("%s\n", str);
	free(str);
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
