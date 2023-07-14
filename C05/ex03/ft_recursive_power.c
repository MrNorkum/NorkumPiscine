/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 09:16:56 by hkeles            #+#    #+#             */
/*   Updated: 2023/04/10 16:18:21 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
	{
		if (nb > 2147483647)
			return (0);
		else
			return (nb * ft_recursive_power(nb, power -1));
	}
	return (0);
}
