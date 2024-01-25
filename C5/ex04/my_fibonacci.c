/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_fibonacci.c                                                           */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 08:59:39 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 08:59:40 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (my_fibonacci(index - 1) + my_fibonacci(index - 2));
}

int	my_fibonacci(int index)
{
	if (index <= 1)
		return (index * (index >= 0) - (index < 0));
	return (my_fibonacci(index - 1) + my_fibonacci(index - 2));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_fibonacci(7));
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
