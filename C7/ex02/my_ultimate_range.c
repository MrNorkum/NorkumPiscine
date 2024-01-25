/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_ultimate_range.c                                                      */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 09:13:31 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 09:13:33 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <stdlib.h>

int	my_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (*range = 0, 0);
	range[0] = malloc(sizeof(int) * (max - min));
	if (!range[0])
		return (*range = 0, -1);
	i = -1;
	while (++i < max - min)
		range[0][i] = min + i;
	return (max - min);
}

#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;
	int	size;

	i = -1;
	size = my_ultimate_range(&arr, 0, 10);
	while (++i < size)
		printf("%d", arr[i]);
	free(arr);
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
