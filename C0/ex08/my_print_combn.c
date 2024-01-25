/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_print_combn.c                                                         */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 03:04:09 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 03:04:11 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char x)
{
	write(1, &x, 1);
}

void	my_putout(int n, int *arr, int pos)
{
	int	i;

	if (pos == 1)
		write(1, ", ", 2);
	i = 0;
	while (i < n)
		my_putchar(arr[i++] + 48);
}

void	my_print_comb_increment(int n, int *arr)
{
	int	i;
	int	max;

	max = 9;
	i = n - 1;
	while (arr[i--] == max--)
		;
	arr[i--] += 1;
	while (i++ < n)
		arr[i + 1] = arr[i] + 1;
}

void	my_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = -1;
	while (++i < n)
		arr[i] = i;
	my_putout(n, arr, 0);
	while (arr[0] != 10 - n || arr[n - 1] != 9)
	{
		if (arr[n - 1] != 9)
			arr[n - 1] += 1;
		else
			my_print_comb_increment(n, arr);
		my_putout(n, arr, 1);
	}
}

int main(void)
{
	my_print_combn(3);
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
