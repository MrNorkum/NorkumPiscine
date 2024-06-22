/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:59:18 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 23:36:12 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_iterative_power(int nb, int power)
{
	int res; // Üs alınmış sonucu tutacak değişken

	res = (power >= 0); // power pozitif veya sıfırsa res'i 1 yap, değilse 0 yap
	while (res && power--) // res pozitif olduğu ve power sıfırdan büyük olduğu sürece döngüye gir
		res *= nb; // res'i nb ile çarp ve power'ı bir azalt
	return (res); // Hesaplanan üs alınmış sonucu döndür
}

int
	main(void)
{
	printf("[ %d ]\n", ft_iterative_power(2, 7)); // ft_iterative_power fonksiyonu ile 2^7 hesapla ve sonucu ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_iterative_power fonksiyonunu kullanarak 2 tabanı ve 7 üssü ile üs alınmış sonucu hesaplar ve sonucu ekrana yazdırır.
**
** 1. ft_iterative_power fonksiyonu:
**    - Parametreler:
**      - int nb: Taban sayısı.
**      - int power: Üs sayısı.
**    - İşlev:
**      - Verilen sayının iteratif (tekrarlamalı) olarak üs alınmış sonucunu hesaplar.
**      - Eğer üs 0 veya pozitifse, üs alınmış sonucu döndürür.
**      - Eğer üs negatifse, 0 döndürür.
**
** 2. main fonksiyonu:
**    - ft_iterative_power fonksiyonunu kullanarak 2 tabanı ve 7 üssü ile üs alınmış sonucu hesaplar ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %d ] formatıyla ft_iterative_power fonksiyonunun döndürdüğü üs alınmış sonucu ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
