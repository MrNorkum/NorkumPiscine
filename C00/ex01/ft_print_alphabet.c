/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:39:01 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/20 23:06:49 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_print_alphabet(void)
{
	int	x;

	x = 97; // ASCII değerine göre 'a' karakteri
	while (x <= 122 && write(1, &x, 1)) // 'a'dan 'z'ye kadar yazdırır
		x++;
}

void
	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26); // Alfabeyi tek seferde yazdırır
}

int
	main(void)
{
	ft_print_alphabet(); // ft_print_alphabet fonksiyonunu çağırır
}

/*
** Bu C programı, standart çıkışa (terminal) küçük harflerden oluşan İngilizce 
** alfabeyi yazdıran iki farklı fonksiyon (ft_print_alphabet) içerir. İlk fonksiyon, 
** karakterleri bir döngü içinde tek tek yazdırır. İkinci fonksiyon ise bütün 
** alfabeyi bir seferde yazdırır. Program, main fonksiyonu içerisinde bu 
** fonksiyonlardan birini çağırarak alfabeyi yazdırır.
**
** Detaylar:
** - #include <unistd.h>: write sistem çağrısı için gerekli olan başlık dosyası.
** - ft_print_alphabet(void): Küçük harflerden oluşan İngilizce alfabeyi 
**   standart çıkışa yazdırır.
** - main(void): Programın giriş noktası, ft_print_alphabet fonksiyonunu çağırır 
**   ve alfabeyi yazar.
*/
