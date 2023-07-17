/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:19:26 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 08:37:07 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buffer = malloc(sizeof(int) * (max - min));
	if (buffer == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = -1;
	while (++i < max - min)
		buffer[i] = min + i;
	return (max - min);
}

#include <stdio.h>
int		main(void)
{
	int	*tab;
	int	i = 0;
	int size = ft_ultimate_range(&tab, 0, 10);
	while(i < size)
		printf("%d", tab[i++]);
}
