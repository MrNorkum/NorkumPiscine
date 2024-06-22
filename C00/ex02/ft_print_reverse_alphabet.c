/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:39:31 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/20 22:17:49 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [v] INCLUDES [v] **************************** */

void
	ft_print_reverse_alphabet(void)
{
	int	x;

	x = 122; // ASCII değerine göre 'z' karakteri
	while (x >= 97 && write(1, &x, 1)) // 'z'den 'a'ya kadar yazdırır
		x--;
}

void
	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26); // Ters alfabeyi tek seferde yazdırır
}

int
	main(void)
{
	ft_print_reverse_alphabet(); // ft_print_reverse_alphabet fonksiyonunu çağırır
}

/*
** Bu C programı, standart çıkışa (terminal) küçük harflerden oluşan İngilizce 
** alfabeyi ters sırayla yazdıran iki farklı fonksiyon (ft_print_reverse_alphabet) 
** içerir. İlk fonksiyon, karakterleri bir döngü içinde tek tek yazdırır. 
** İkinci fonksiyon ise bütün ters alfabeyi bir seferde yazdırır. Program, 
** main fonksiyonu içerisinde bu fonksiyonlardan birini çağırarak ters alfabeyi 
** yazdırır.
**
** Detaylar:
** - #include <unistd.h>: write sistem çağrısı için gerekli olan başlık dosyası.
** - ft_print_reverse_alphabet(void): Küçük harflerden oluşan İngilizce alfabeyi 
**   ters sırayla standart çıkışa yazdırır.
** - main(void): Programın giriş noktası, ft_print_reverse_alphabet fonksiyonunu 
**   çağırır ve ters alfabeyi yazar.
*/
