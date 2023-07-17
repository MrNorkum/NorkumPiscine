/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:08:34 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 08:36:05 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*buffer;

	if (min >= max)
		return (0);
	buffer = malloc((max - min) * sizeof(int));
	if (!buffer)
		return (0);
	i = -1;
	while (++i < max - min)
		buffer[i] = min + i;
	return (buffer);
}

#include <stdio.h>
int main(void)
{
	int tab[10] = ft_range(0, 10);
	int i = 0;
	while (i < 10)
		printf("%d", tab[i++]);
}
