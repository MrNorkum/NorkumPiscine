/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_sort_int_tab.c                                                        */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:16:46 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:16:48 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

int	my_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	return (1);
}

void	my_sort_int_tab(int *tab, int size)
{
	int i;
	int is_swap;

	is_swap = 1;
	while (is_swap)
	{
		i = -1;
		is_swap = 0;
		while (++i < size - 1)
		{
			if (tab[i] < tab[i + 1])
				is_swap = my_swap(&tab[i], &tab[i + 1]);
		}
	}
}

#include <stdio.h>
int main(void)
{
	int arr[7] = {2, 4, 1, 5, 6, 7, 3};
	my_sort_int_tab(arr, 7);
	int i = 0;
	while (i < 7)
		printf("%d", arr[i++]);
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
