/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:54:55 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:44:22 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_strlen(char *str)
{
	char *tmp; // Geçici işaretçi

	tmp = str; // str dizisinin başlangıç adresini tmp'ye kaydet
	while (*str) // str üzerinde sona gelene kadar dön
		++str; // str işaretçisini bir sonraki karaktere ilerlet
	return (str - tmp); // Son indeks ile başlangıç indeksi arasındaki farkı (uzunluğu) döndür
}

unsigned int
	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;      // src dizisi üzerinde döngü değişkeni
	unsigned int d_len;  // dest dizisinin uzunluğu
	unsigned int s_len;  // src dizisinin uzunluğu

	i = -1;              // i'yi -1 olarak başlat
	d_len = ft_strlen(dest); // dest dizisinin uzunluğunu hesapla
	s_len = ft_strlen(src);  // src dizisinin uzunluğunu hesapla

	if (!size || size <= d_len) // Eğer size 0 ise veya size, dest dizisinin uzunluğundan küçük veya eşitse
		return (s_len + size); // sadece src dizisinin uzunluğunu (s_len) döndür

	while (src[++i] && i < size - d_len - 1) // src dizisini dest dizisinin sonuna ekler
		dest[d_len + i] = src[i]; // dest dizisinin sonundan itibaren src dizisini kopyala

	dest[d_len + i] = '\0'; // dest dizisinin sonuna null karakteri ekle
	return (d_len + s_len); // eklenen toplam karakter sayısını döndür
}

int
	main(void)
{
	char dest[23] = "Mr. Norkum "; // Hedef dizisi (yeterli büyüklükte tanımlandı)
	char src[] = "Was Here Xd";   // Kaynak dizisi

	printf("[ %d ][ %s ]\n", ft_strlcat(dest, src, 23), dest); // Birleştirilmiş diziyi ve toplam uzunluğu ekrana yazdır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strlen ve ft_strlcat fonksiyonlarını kullanarak bir karakter dizisine başka bir karakter dizisini eklemeyi ve sonucu ekrana yazdırmayı gösterir.
**
** 1. ft_strlen fonksiyonu:
**    - Parametre:
**      - char *str: Uzunluğu hesaplanacak karakter dizisi.
**    - İşlev:
**      - Verilen karakter dizisinin uzunluğunu hesaplar.
**      - Null karakter '\0' bulunana kadar ilerleyerek karakter sayısını döndürür.
**
** 2. ft_strlcat fonksiyonu:
**    - Parametreler:
**      - char *dest: Hedef karakter dizisi (birleştirilecek dizi).
**      - char *src: Kaynak karakter dizisi (eklenecek dizi).
**      - unsigned int size: dest dizisinin boyutu.
**    - İşlev:
**      - src dizisini dest dizisinin sonuna ekler.
**      - Eğer dest dizisinin boyutu size 0 ise veya size, dest dizisinin uzunluğundan küçük veya eşitse,
**        sadece src dizisinin uzunluğunu döndürür.
**      - Aksi takdirde, src dizisini dest dizisinin sonuna ekler ve eklenen toplam karakter sayısını döndürür.
**
** 3. main fonksiyonu:
**    - Örnek bir dest ve src dizisi tanımlar.
**    - ft_strlcat fonksiyonu ile src dizisini dest dizisinin sonuna ekler ve sonucu ekrana yazdırır.
**
** 4. printf fonksiyonu:
**    - [ %d ][ %s ] formatıyla ft_strlcat fonksiyonunun döndürdüğü birleştirilmiş diziyi ve toplam uzunluğu ekrana yazdırır.
**
** 5. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
