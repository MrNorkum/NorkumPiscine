/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:59:46 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 23:50:21 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_sqrt(int nb)
{
	long i; // Karekök bulmak için kullanılacak değişken

	i = 0; // Başlangıç değeri olarak 0 atandı
	while (++i <= 46340 && i * i <= nb) // 46340'a kadar ve i'nin karesi nb'den küçük veya eşit olduğu sürece döngüye gir
		if (i * i == nb) // Eğer i'nin karesi nb'ye eşitse
			return (i); // i'yi döndür (nb'nin karekökü bulundu)
	return (0); // Tam karekök bulunamadı, 0 döndür
}

int
	main(void)
{
	printf("[ %d ]\n", ft_sqrt(169)); // ft_sqrt fonksiyonu ile 169 sayısının karekökünü hesapla ve sonucu ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_sqrt fonksiyonunu kullanarak 169 sayısının karekökünü hesaplar ve sonucu ekrana yazdırır.
**
** 1. ft_sqrt fonksiyonu:
**    - Parametre:
**      - int nb: Karekökü alınacak sayı.
**    - İşlev:
**      - Verilen sayının karekökünü bulur.
**      - Eğer sayının karekökü tam sayı ise bu sayıyı döndürür.
**      - Tam karekök bulunamazsa 0 döndürür.
**
** 2. main fonksiyonu:
**    - ft_sqrt fonksiyonunu kullanarak 169 sayısının karekökünü hesaplar ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %d ] formatıyla ft_sqrt fonksiyonunun döndürdüğü karekökü ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
