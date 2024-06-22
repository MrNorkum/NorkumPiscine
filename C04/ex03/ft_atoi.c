/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:56:33 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 23:07:36 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_atoi(char *str)
{
	int sign; // İşaret belirteci (pozitif veya negatif)
	int res;  // Sonuç (dönüştürülen tam sayı)

	sign = 0; // İşaret belirtecini başlangıçta pozitif kabul et
	res = 0;  // Sonucu başlangıçta 0 olarak başlat
	while (*str == 32 || (*str >= 9 && *str <= 13)) // Boşluk ve kontrol karakterlerini atla
		str++;
	while (*str == '-' || *str == '+') // Ardışık '-' ve '+' işaretlerini değerlendir
	{
		if (*str == '-') // Eğer '-' işareti varsa
			sign = !sign; // İşareti değiştir (pozitiften negatife veya tersi)
		str++;
	}
	while (*str >= '0' && *str <= '9') // Rakam karakterlerini değerlendir
		res = (res * 10) + (*str++ - 48); // Rakamları toplayarak tam sayı değerini hesapla
	if (sign) // Eğer işaret negatifse
		return (-res); // Negatif tam sayı değeri döndür
	return (res); // Pozitif tam sayı değeri döndür
}

int
	main(void)
{
	printf("[ %d ]", ft_atoi("		+---+1342a456789")); // ft_atoi fonksiyonu ile tam sayıya dönüştürülen sonucu ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_atoi fonksiyonunu kullanarak "		+---+1342a456789" karakter dizisini tam sayıya dönüştürür ve sonucu ekrana yazdırır.
**
** 1. ft_atoi fonksiyonu:
**    - Parametre:
**      - char *str: Tam sayıya dönüştürülecek karakter dizisi.
**    - İşlev:
**      - Verilen karakter dizisini tam sayıya dönüştürür.
**      - Başlangıçtaki boşluk ve geçersiz karakterleri atlar.
**      - Ardışık '-' ve '+' işaretlerini değerlendirir ve işaretin pozitif veya negatif olduğunu belirler.
**      - Rakam karakterlerini toplayarak tam sayı değerini hesaplar.
**
** 2. main fonksiyonu:
**    - ft_atoi fonksiyonunu kullanarak "		+---+1342a456789" karakter dizisini tam sayıya dönüştürür ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %d ] formatıyla ft_atoi fonksiyonunun döndürdüğü tam sayı değerini ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
