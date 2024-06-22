/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:59:02 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 23:10:45 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_iterative_factorial(int nb)
{
	int res; // Faktöriyel sonucunu tutacak değişken

	res = (0 <= nb && nb <= 12); // nb'nin 0 ile 12 arasında olup olmadığını kontrol et ve res'e ata
	while (res && nb) // res pozitif ve nb pozitif olduğu sürece döngüye gir
		res *= nb--; // res'i nb ile çarp ve nb'yi bir azalt
	return (res); // Hesaplanan faktöriyel değerini döndür
}

int
	main(void)
{
	printf("[ %d ]\n", ft_iterative_factorial(7)); // ft_iterative_factorial fonksiyonu ile 7'nin faktöriyelini hesapla ve sonucu ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_iterative_factorial fonksiyonunu kullanarak 7 sayısının faktöriyelini hesaplar ve sonucu ekrana yazdırır.
**
** 1. ft_iterative_factorial fonksiyonu:
**    - Parametre:
**      - int nb: Faktöriyeli hesaplanacak sayı.
**    - İşlev:
**      - Verilen sayının faktöriyelini iteratif (tekrarlamalı) olarak hesaplar.
**      - Eğer sayı 0 ile 12 arasında değilse 0 döndürür.
**      - Faktöriyel hesaplaması için 1'den başlayarak verilen sayıya kadar olan tüm sayıları çarpar.
**
** 2. main fonksiyonu:
**    - ft_iterative_factorial fonksiyonunu kullanarak 7 sayısının faktöriyelini hesaplar ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %d ] formatıyla ft_iterative_factorial fonksiyonunun döndürdüğü faktöriyel değerini ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
