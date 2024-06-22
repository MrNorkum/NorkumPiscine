/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:23:02 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:23:09 by hkeles           ###   ########.fr       */
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

	tmp = str; // Başlangıç adresini kaydet
	while (*str) // null karaktere kadar ilerle
		str++; // Sonraki karaktere geç
	return (str - tmp); // Son adres ile başlangıç adresi arasındaki fark uzunluğu verir
}

unsigned int
	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i; // Döngü değişkeni

	i = -1; // i'yi -1 olarak başlat
	if (size != 0) // Hedef dizinin boyutu sıfırdan farklıysa
	{
		while (src[++i] && i < size - 1) // src dizisini kopyala, size - 1 karakterden fazlasını almamaya dikkat et
			dest[i] = src[i]; // Karakteri kopyala
		dest[i] = '\0'; // Hedef dizisinin sonuna null karakter ekle
	}
	return (ft_strlen(src)); // Kopyalanan src dizisinin uzunluğunu geri döndür
}

int
	main(void)
{
	char	dest[] = "1234567890"; // Hedef dizi
	char	src[] = "hkeles     Was Here Xd"; // Kaynak dizi

	printf("[ %d ][ %s ]\n", ft_strlcpy(dest, src, 11), dest); // Kopyalama işleminin sonucunu ve hedef diziyi yazdır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strlcpy fonksiyonunu kullanarak bir karakter dizisinin belirtilen maksimum sayıda karakterini başka bir karakter dizisine kopyalamayı gösterir.
**
** 1. ft_strlen fonksiyonu:
**    - Parametreler:
**      - char *str: Uzunluğu hesaplanacak karakter dizisi.
**    - İşlevi:
**      - Verilen karakter dizisinin uzunluğunu hesaplar (null karakter hariç).
**      - Geri dönüş değeri olarak karakter dizisinin uzunluğunu verir.
**
** 2. ft_strlcpy fonksiyonu:
**    - Parametreler:
**      - char *dest: Kopyalama işlemi yapılacak hedef karakter dizisi.
**      - char *src: Kopyalanacak kaynak karakter dizisi.
**      - unsigned int size: Hedef dizinin boyutu (hedef dizide saklanacak maksimum karakter sayısı).
**    - İşlevi:
**      - src dizisinden size - 1 karakterini dest dizisine kopyalar.
**      - Sonuna null karakter ekler.
**      - Geri dönüş olarak src dizisinin uzunluğunu verir (null karakter hariç).
**
** 3. main fonksiyonu:
**    - Örnek bir hedef (dest) ve kaynak (src) dizisi tanımlar.
**    - ft_strlcpy fonksiyonu ile src dizisinin ilk 11 karakterini dest dizisine kopyalar ve sonucu yazdırır.
**
** 4. printf fonksiyonları:
**    - [ %d ][ %s ] formatıyla kopyalama işleminin sonucunu ve hedef diziyi yazdırır.
**
** 5. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
