/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:26:24 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 04:41:26 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar(45);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int main(void)
{
	ft_putnbr(-42);
}

//Burada ise integer aralığında verilen her sayıyı yazdırmamız gerekiyor.
//Biz ise burada fonksiyona gönderdiğimiz sayıyı daha geniş bir aralık olan long aralığına gönderiyoruz.
//Böylece integer aralığını aşma vs gibi durumlar olmadan işlemlerimizi rahatça yapabiliyoruz.
//Fonksiyonda sayımız negatif ise putchar ile '-' yazdırıyoruz ve sayıyı pozitife çevirip işleme alıyoruz.
//Sayımız iki basamaklı olduğu sürece bir basamak azaltarak fonksiyona tekrar gönderiyoruz.
//Ardından sayımız tek basamaklı olduğu anda basamakların hepsini teker teker yazdırıyoruz.
