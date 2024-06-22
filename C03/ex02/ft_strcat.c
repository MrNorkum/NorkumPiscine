/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:52:25 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:26:24 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

char
	*ft_strcat(char *dest, char *src)
{
	int d_len; // dest dizisinin uzunluğu
	int i; // döngü değişkeni

	i = -1; // i'yi -1 olarak başlat
	d_len = 0; // dest dizisinin uzunluğunu 0 olarak başlat
	while (dest[d_len]) // dest dizisinin sonuna kadar ilerle
		++d_len; // dest dizisinin uzunluğunu artır
	while (src[++i]) // src dizisinin sonuna kadar ilerle
		dest[d_len + i] = src[i]; // src dizisini dest dizisinin sonuna ekle
	return (dest[d_len + i] = '\0', dest); // Birleştirilen dest dizisinin başlangıç adresini döndür
}

int
	main(void)
{
	char	dest[27] = "Mr. Norkum"; // Hedef dizisi (yeterli büyüklükte tanımlandı)
	char	src[] = " Was Here Xd"; // Kaynak dizisi

	printf("[ %s ]\n", ft_strcat(dest, src)); // Birleştirilmiş diziyi ekrana yazdır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strcat fonksiyonu ile verilen iki karakter dizisini birleştirip (concatenate) sonucunu döndürmeyi gösterir.
**
** 1. ft_strcat fonksiyonu:
**    - Parametreler:
**      - char *dest: Kopyalanan karakter dizisinin hedefi (birleştirilecek dizi).
**      - char *src: Birleştirilecek karakter dizisi.
**    - İşlevi:
**      - src dizisini dest dizisinin sonuna ekler (birleştirir).
**      - Birleştirilen dest dizisinin başlangıç adresini döndürür.
**
** 2. main fonksiyonu:
**    - Örnek bir hedef (dest) ve kaynak (src) dizisi tanımlar.
**    - ft_strcat fonksiyonu ile src dizisini dest dizisinin sonuna ekler ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %s ] formatıyla ft_strcat fonksiyonunun döndürdüğü birleştirilmiş diziyi ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
