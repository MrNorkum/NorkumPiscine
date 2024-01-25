/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strlen.c                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:15:46 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:15:49 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + my_strlen(str + 1));
}

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", my_strlen("Mr. Norkum Was Here Xd"));
}

//İkiside aynı çalışır inceleyin kullanın.

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
