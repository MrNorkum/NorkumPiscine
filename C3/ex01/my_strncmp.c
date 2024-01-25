/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strncmp.c                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:28:24 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:28:26 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main(void)
{
	char str[] = "Mr. Norkum wAS Here Xd";
	char str2[] = "Mr. Norkum WAS Here Xd";
	printf("%d\n", my_strncmp(str, str2, 10));
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
