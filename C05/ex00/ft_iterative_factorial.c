/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 21:20:05 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 07:50:32 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;
	int	i;

	x = 1;
	i = 0;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (0 < nb && nb < 13)
	{
		while (++i <= nb)
			x *= i;
		return (x);
	}
	return (0);
}
