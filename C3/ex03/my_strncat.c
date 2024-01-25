/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strncat.c                                                             */
/*                                                                            */
/*   By: hkeles <hkeles@student.42.fr>                                        */
/*                                                                            */
/*   Created: 2024/01/11 15:56:32 by hkeles                       ig:mrnorkum */
/*   Updated: 2024/01/11 15:56:33 by hkeles                       tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

char	*my_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	i;

	i = -1;
	d = -1;
	while (dest[++d])
		;
	while (src[++i] && i < nb)
		dest[d + i] = src[i];
	return (dest[d + i] = '\0', dest);
}

#include <stdio.h>

int	main(void)
{
	char	dest[27] = "Mr. Norkum";
	char	src[] = " Was Here Xd";

	printf("%s\n", my_strncat(dest, src, 9));
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
