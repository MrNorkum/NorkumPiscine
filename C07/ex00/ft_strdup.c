/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:13:17 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/22 02:09:46 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdlib.h> /*
# define NULL
#   void *malloc(size_t);
#   void free(void *);
#        */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_strlen(char *str)
{
	char *temp; // Geçici işaretçi

	temp = str; // str dizisinin başlangıç adresini temp'e kaydet
	while (*str) // str üzerinde sona gelene kadar dön
		++str; // str işaretçisini bir sonraki karaktere ilerlet
	return (str - temp); // Son indeks ile başlangıç indeksi arasındaki farkı (uzunluğu) döndür
}

char
	*ft_strdup(char *src)
{
	int i; // Kaynak dizinin karakterleri için indeks
	char *copy; // Kopya karakter dizisi için işaretçi

	i = -1; // Başlangıçta -1 olarak ayarla
	copy = malloc(sizeof(char) * ft_strlen(src) + 1); // Kaynak dizinin uzunluğuna göre hafıza tahsis et
	if (!copy) // Hafıza tahsisi başarısız olursa
		return (NULL); // NULL döndür
	while (src[++i]) // Kaynak dizinin karakterlerini kopyala
		copy[i] = src[i]; // Karakteri kopya dizisine ata
	copy[i] = '\0'; // Kopya dizisinin sonuna null karakter ekle
	return (copy); // Kopya dizisini döndür
}

int
	main(void)
{
	char *str; // Kopyalanacak karakter dizisi için işaretçi

	str = ft_strdup("Mr. Norkum Was Here Xd"); // ft_strdup fonksiyonu ile karakter dizisinin kopyasını oluştur
	printf("Copy: [ %s ]\n", str); // Kopyalanan diziyi ekrana yazdır
	free(str); // Kullanılan hafızayı serbest bırak
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strdup fonksiyonunu kullanarak verilen bir karakter dizisinin kopyasını oluşturur, ekrana yazdırır ve kullanılan hafızayı serbest bırakır.
**
** 1. ft_strlen fonksiyonu:
**    - Parametre:
**      - char *str: Uzunluğu hesaplanacak karakter dizisi.
**    - İşlev:
**      - Verilen karakter dizisinin uzunluğunu hesaplar.
**      - Null karakter '\0' bulunana kadar ilerleyerek karakter sayısını döndürür.
**
** 2. ft_strdup fonksiyonu:
**    - Parametre:
**      - char *src: Kopyalanacak kaynak karakter dizisi.
**    - İşlev:
**      - Verilen kaynak karakter dizisinin bir kopyasını oluşturur.
**      - Yeni oluşturulan kopyayı döndürür.
**      - Kopyalama sırasında hafıza tahsis edilir.
**
** 3. main fonksiyonu:
**    - İşlev:
**      - ft_strdup fonksiyonunu kullanarak verilen bir karakter dizisinin kopyasını oluşturur.
**      - Kopyalanan diziyi ekrana yazdırır.
**      - Kullanılan hafızayı serbest bırakır.
**
** 4. malloc fonksiyonu:
**    - Parametre:
**      - sizeof(char) * ft_strlen(src) + 1: Tahsis edilecek hafıza boyutu.
**    - İşlev:
**      - Verilen boyutta hafıza tahsis eder ve başlangıç adresini döndürür.
**
** 5. free fonksiyonu:
**    - Parametre:
**      - str: Serbest bırakılacak hafıza alanının adresi.
**    - İşlev:
**      - Tahsis edilen hafızayı serbest bırakır.
**
** 6. printf fonksiyonu:
**    - Parametre:
**      - Copy: [ %s ] formatıyla karakter dizisini yazdırır.
**      - str: Yazdırılacak karakter dizisi.
**    - İşlev:
**      - Verilen karakter dizisini ekrana yazdırır ve yeni satıra geçer.
**
** 7. return 0:
**    - İşlev:
**      - Programın başarıyla tamamlandığını belirtir.
*/
