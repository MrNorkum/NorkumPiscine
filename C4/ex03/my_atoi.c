/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_atoi.c                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 08:56:33 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 08:56:37 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_atoi(char *str)
{
	int	d;
	int	res;

	d = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		d *= (*str == '-') * -1 + !(*str == '-');
		str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - 48;
	return (res * d);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", my_atoi("		+---+1342a456789"));
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
