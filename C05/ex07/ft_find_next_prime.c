/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:00:05 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/22 00:07:43 by hkeles           ###   ########.fr       */
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
	ft_find_next_prime(int nb)
{
	if (nb <= 2) // Eğer nb 2'den küçük veya eşitse
		return (2); // 2 döndür (2 en küçük asal sayı)
	while (1) // Sonsuz döngü başlat
		if (ft_is_prime(nb++)) // Eğer nb asalsa
			return (--nb); // nb'yi geri döndür
	return (0); // Geçerli koşul sağlanmazsa 0 döndür (asal sayı bulunamadı)
}

int
	main(void)
{
	printf("[ %d ]\n", ft_find_next_prime(12)); // ft_find_next_prime fonksiyonu ile 12 sayısından sonraki en yakın asal sayıyı bul ve sonucu ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_find_next_prime fonksiyonunu kullanarak 12 sayısından sonraki en yakın asal sayıyı bulur ve sonucu ekrana yazdırır.
**
** 1. ft_is_prime fonksiyonu:
**    - Parametre:
**      - int nb: Kontrol edilecek sayı.
**    - İşlev:
**      - Verilen sayının asal olup olmadığını kontrol eder.
**      - Eğer sayı asalsa 1, değilse 0 döndürür.
**      - 1'den küçük veya 46340'tan büyük sayılar için doğru sonuç vermeyebilir.
**
** 2. ft_find_next_prime fonksiyonu:
**    - Parametre:
**      - int nb: Başlangıç noktası olarak kullanılacak sayı.
**    - İşlev:
**      - Verilen sayıdan büyük ve en yakın asal sayıyı bulur.
**      - Eğer nb 2'den küçükse, 2 döndürür.
**      - Sonsuz döngü içinde ft_is_prime fonksiyonunu kullanarak asal sayıyı bulur ve döndürür.
**
** 3. main fonksiyonu:
**    - ft_find_next_prime fonksiyonunu kullanarak 12 sayısından sonraki en yakın asal sayıyı bulur ve sonucu ekrana yazdırır.
**
** 4. printf fonksiyonu:
**    - [ %d ] formatıyla ft_find_next_prime fonksiyonunun döndürdüğü sonucu ekrana yazdırır.
**
** 5. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
