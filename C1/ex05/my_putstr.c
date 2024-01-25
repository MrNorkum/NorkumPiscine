/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_putstr.c                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:15:21 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:15:23 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <unistd.h>

void	my_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	my_putstr(char *str)
{
	while (*str && write(1, str++, 1))
		;
}

int main(void)
{
	my_putstr("Mr. Norkum Was Here Xd");
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
