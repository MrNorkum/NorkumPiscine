/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:43:41 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 05:40:39 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size >= 0)
	{
		i = -1;
		while (++i < size - 1)
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
		size--;
	}
}

#include <stdio.h>
int main(void)
{
	int tab[7] = {2, 4, 1, 5, 6, 7, 3};
	ft_sort_int_tab(tab, 7);
	int i = 0;
	while (i < 7)
		printf("%d", tab[i++]);
}
