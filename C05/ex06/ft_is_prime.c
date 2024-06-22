/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:59:55 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 23:57:31 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_is_prime(int nb)
{
	int i; // Asal sayı kontrolü için kullanılacak değişken

	i = 1; // Başlangıç değeri olarak 1 atandı
	if (nb <= 1) // Eğer nb 1'den küçük veya eşitse
		return (0); // 0 döndür (asal değil)
	while (++i <= 46340 && i * i <= nb) // 46340'a kadar ve i'nin karesi nb'den küçük veya eşit olduğu sürece döngüye gir
		if (nb % i == 0) // Eğer nb i'ye tam bölünüyorsa
			return (0); // 0 döndür (asal değil)
	return (1); // Asal ise 1 döndür
}

int
	main(void)
{
	printf("[ %d ]\n", ft_is_prime(13)); // ft_is_prime fonksiyonu ile 13 sayısının asal olup olmadığını kontrol et ve sonucu ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_is_prime fonksiyonunu kullanarak 13 sayısının asal olup olmadığını kontrol eder ve sonucu ekrana yazdırır.
**
** 1. ft_is_prime fonksiyonu:
**    - Parametre:
**      - int nb: Kontrol edilecek sayı.
**    - İşlev:
**      - Verilen sayının asal olup olmadığını kontrol eder.
**      - Eğer sayı asalsa 1, değilse 0 döndürür.
**      - 1'den küçük veya 46340'tan büyük sayılar için doğru sonuç vermeyebilir.
**
** 2. main fonksiyonu:
**    - ft_is_prime fonksiyonunu kullanarak 13 sayısının asal olup olmadığını kontrol eder ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %d ] formatıyla ft_is_prime fonksiyonunun döndürdüğü sonucu ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
