/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:40:25 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/20 23:07:17 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_is_negative(int n)
{
	write(1, "P", !(n < 0)); // n negatif değilse 'P' yazdırır
	write(1, "N", (n < 0)); // n negatifse 'N' yazdırır
}

void
	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1); // n negatifse 'N' yazdırır
	else
		write(1, "P", 1); // n pozitifse 'P' yazdırır
}

int
	main(void)
{
	ft_is_negative(-42); // 'N' yazdırır (negatif)
	ft_is_negative(0);   // 'P' yazdırır (pozitif)
	ft_is_negative(42);  // 'P' yazdırır (pozitif)
}

/*
** Bu C programı, verilen bir tamsayının (integer) negatif mi pozitif mi olduğunu 
** belirten iki farklı fonksiyon (ft_is_negative) içerir. İlk fonksiyon, 
** verilen sayının negatif olup olmadığını kontrol ederek 'N' veya 'P' karakterini 
** standart çıkışa yazdırır. İkinci fonksiyon ise aynı işlevi if-else yapısı 
** kullanarak gerçekleştirir.
**
** Detaylar:
** - #include <unistd.h>: write sistem çağrısı için gerekli olan başlık dosyası.
** - ft_is_negative(int n): Verilen tamsayının negatif olup olmadığını kontrol 
**   ederek 'N' veya 'P' karakterini standart çıkışa yazdırır.
** - main(void): Programın giriş noktası, ft_is_negative fonksiyonunu test eder.
*/
