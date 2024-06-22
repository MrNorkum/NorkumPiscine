/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:56:32 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:30:45 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

char
	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int d_len; // dest dizisindeki karakter sayacı
	unsigned int i; // src dizisindeki karakter sayacı

	i = -1; // i'yi -1 olarak başlat
	d_len = -1; // d'yi -1 olarak başlat
	while (dest[d_len]) // dest dizisinin sonuna kadar ilerle
		++d_len; // dest dizisinin uzunluğunu artır
	while (src[++i] && i < nb) // src dizisini nb kadar veya sonuna kadar dest dizisinin sonuna ekle
		dest[d_len + i] = src[i];
	return (dest[d_len + i] = '\0', dest); // Birleştirilen dest dizisinin başlangıç adresini döndür
}

int
	main(void)
{
	char	dest[27] = "Mr. Norkum"; // Hedef dizisi (yeterli büyüklükte tanımlandı)
	char	src[] = " Was Here Xd"; // Kaynak dizisi

	printf("[ %s ]\n", ft_strncat(dest, src, 9)); // Birleştirilmiş diziyi ekrana yazdır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strncat fonksiyonu ile belirtilen maksimum karakter sayısı (nb) kadar src dizisini dest dizisinin sonuna ekleyerek sonucu döndürmeyi gösterir.
**
** 1. ft_strncat fonksiyonu:
**    - Parametreler:
**      - char *dest: Kopyalanan karakter dizisinin hedefi (birleştirilecek dizi).
**      - char *src: Birleştirilecek karakter dizisi.
**      - unsigned int nb: Birleştirilecek maksimum karakter sayısı.
**    - İşlevi:
**      - src dizisini dest dizisinin sonuna nb kadar karakter ekler.
**      - Birleştirilen dest dizisinin başlangıç adresini döndürür.
**
** 2. main fonksiyonu:
**    - Örnek bir hedef (dest) ve kaynak (src) dizisi tanımlar.
**    - ft_strncat fonksiyonu ile src dizisini dest dizisinin sonuna 9 karakter kadar ekler ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - "[ %s ]\n" formatıyla ft_strncat fonksiyonunun döndürdüğü birleştirilmiş diziyi ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
