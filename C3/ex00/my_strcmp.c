/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strcmp.c                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:27:33 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:27:38 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "Mr. Norkum wAS Here Xd";
	char	str2[] = "Mr. Norkum WAS Here Xd";

	printf("%d\n", my_strcmp(str1, str2));
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
