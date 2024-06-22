/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:40:00 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/20 23:07:01 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_print_numbers(void)
{
	int	x;

	x = 48; // ASCII değerine göre '0' karakteri
	while (x <= 57 && write(1, &x, 1)) // '0'dan '9'a kadar yazdırır
		x++;
}

void
	ft_print_numbers(void)
{
	write(1, "0123456789", 10); // Rakamları tek seferde yazdırır
}

int
	main(void)
{
	ft_print_numbers(); // ft_print_numbers fonksiyonunu çağırır
}

/*
** Bu C programı, standart çıkışa (terminal) 0'dan 9'a kadar olan rakamları 
** yazdıran iki farklı fonksiyon (ft_print_numbers) içerir. İlk fonksiyon, 
** rakamları bir döngü içinde tek tek yazdırır. İkinci fonksiyon ise bütün 
** rakamları bir seferde yazdırır. Program, main fonksiyonu içerisinde bu 
** fonksiyonlardan birini çağırarak rakamları yazdırır.
**
** Detaylar:
** - #include <unistd.h>: write sistem çağrısı için gerekli olan başlık dosyası.
** - ft_print_numbers(void): 0'dan 9'a kadar olan rakamları standart çıkışa 
**   yazdırır.
** - main(void): Programın giriş noktası, ft_print_numbers fonksiyonunu çağırır 
**   ve rakamları yazar.
*/
