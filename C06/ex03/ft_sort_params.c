/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:02:58 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/14 03:44:06 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int		a;
	int		x;

	x = 0;
	while (++x < ac - 1)
	{
		a = 0;
		while (++a < ac - 1)
		{
			if (ft_strcmp(av[a], av[a + 1]) > 0)
				ft_swap(&av[a], &av[a + 1]);
		}
	}
	a = 0;
	while (++a < ac)
	{
		ft_putstr(av[a]);
		write(1, "\n", 1);
	}
	return (0);
}
