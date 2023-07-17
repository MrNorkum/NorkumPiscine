/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 04:45:21 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 05:02:03 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int n, int *tab, int pos)
{
	int	i;

	if (pos == 1)
		write(1, ", ", 2);
	i = 0;
	while (i < n)
		ft_putchar(tab[i++] + '0');
}

void	ft_print_comb_increment(int n, int *tab)
{
	int	i;
	int	max;

	max = 9;
	i = n - 1;
	while (tab[i--] == max--)
		;
	tab[i--] += 1;
	while (i++ < n)
		tab[i + 1] = tab[i] + 1;
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = -1;
	while (++i < n)
		tab[i] = i;
	ft_putout(n, tab, 0);
	while (tab[0] != 10 - n || tab[n - 1] != 9)
	{
		if (tab[n - 1] != 9)
			tab[n - 1] += 1;
		else
			ft_print_comb_increment(n, tab);
		ft_putout(n, tab, 1);
	}
}

int main(void)
{
	ft_print_combn(3);
}

//Burada ise print_comb fonksiyonun gelişmiş versiyonunu hazırladık.
//3 giridiğimiz zaman aynen print_comb fonksiyonunda olduğu gibi 012 013 ... ve en son 789 yazdırıyoruz.
//Böylece 3 basamaklar için işlem yapmış oluyoruz.
//4 için ise 0123 ... 4569 4578 4579 4589 4679 ve en son 6789 şeklinde çıktı verecek şekilde bir fonksiyon hazırlıyoruz.
//0 ile 9 arasındaki bütün basamaklar için çalışabilir olması gerekiyor.
