/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:49:34 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 04:31:51 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != 55)
					write(1, ", ", 2);
				C++;
			}
			b++;
		}
		a++;
	}
}
