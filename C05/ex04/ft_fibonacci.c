/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:59:39 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 23:47:42 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_fibonacci(int index)
{
	if (index < 0) // Eğer indeks negatifse
		return (-1); // -1 döndür (geçersiz indeks)
	if (index <= 1) // Eğer indeks 0 veya 1 ise
		return (index); // İndeksi döndür (0 veya 1)
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2)); // Fibonacci dizisinin önceki iki elemanının toplamını döndür
}

int
	main(void)
{
	printf("[ %d ]\n", ft_fibonacci(7)); // ft_fibonacci fonksiyonu ile 7. Fibonacci sayısını hesapla ve sonucu ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_fibonacci fonksiyonunu kullanarak 7 indeksinin Fibonacci sayısını hesaplar ve sonucu ekrana yazdırır.
**
** 1. ft_fibonacci fonksiyonu:
**    - Parametre:
**      - int index: Fibonacci dizisinin istenen indeksi.
**    - İşlev:
**      - Verilen indeksin Fibonacci sayısını recursive (özyineli) olarak hesaplar.
**      - Eğer indeks negatifse, -1 döndürür.
**      - Eğer indeks 0 veya 1 ise, indeksi döndürür.
**      - Diğer durumlarda, Fibonacci dizisinin önceki iki elemanının toplamını döndürür.
**
** 2. main fonksiyonu:
**    - ft_fibonacci fonksiyonunu kullanarak 7 indeksinin Fibonacci sayısını hesaplar ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %d ] formatıyla ft_fibonacci fonksiyonunun döndürdüğü Fibonacci sayısını ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
