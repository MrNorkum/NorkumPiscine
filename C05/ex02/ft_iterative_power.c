/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 23:28:57 by hkeles            #+#    #+#             */
/*   Updated: 2023/04/10 16:17:49 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	while (power > 0)
	{
		if ((power % 2) == 1)
			r *= nb;
		nb *= nb;
		power /= 2;
	}
	if (r > 2147483647)
		return (0);
	return (r);
}
