/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:56:09 by Mr. Norkum        #+#    #+#             */
/*   Updated: 2024/06/21 23:06:04 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_strlen(char *str) // ft_strlen (recursive)
{
	if (*str == '\0') // Eğer karakter dizisinin başındaki karakter null karakter ise
		return 0;     // 0 döndür
	return 1 + ft_strlen(str + 1); // Aksi takdirde, 1 ekleyerek fonksiyonu tekrar çağır
}

int
	ft_strlen(char *str) // ft_strlen (iterative)
{
	char *tmp; // Geçici işaretçi

	tmp = str; // str dizisinin başlangıç adresini tmp'ye kaydet
	while (*str) // str üzerinde sona gelene kadar dön
		++str; // str işaretçisini bir sonraki karaktere ilerlet
	return (str - tmp); // Son indeks ile başlangıç indeksi arasındaki farkı (uzunluğu) döndür
}

int
	main(void)
{
	printf("Length: [ %d ]\n", ft_strlen("Mr. Norkum Was Here Xd")); // ft_strlen fonksiyonunu kullanarak karakter dizisinin uzunluğunu hesapla ve yazdır
	return 0; // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strlen fonksiyonunun iki farklı versiyonunu kullanarak "Mr. Norkum Was Here Xd" karakter dizisinin uzunluklarını hesaplar ve ekrana yazdırır.
**
** 1. ft_strlen (recursive) fonksiyonu:
**    - Parametre:
**      - char *str: Uzunluğu hesaplanacak karakter dizisi.
**    - İşlev:
**      - Verilen karakter dizisinin uzunluğunu, recursive (özyineli) bir şekilde hesaplar.
**      - Null karakter '\0' bulunana kadar ilerleyerek karakter sayısını döndürür.
**
** 2. ft_strlen (iterative) fonksiyonu:
**    - Parametre:
**      - char *str: Uzunluğu hesaplanacak karakter dizisi.
**    - İşlev:
**      - Verilen karakter dizisinin uzunluğunu, iterative (yinelemeli) bir şekilde hesaplar.
**      - Null karakter '\0' bulunana kadar karakter dizisini sonuna kadar ilerler ve karakter sayısını hesaplar.
**      - Son olarak, başlangıç adresi ile son indeks arasındaki farkı (uzunluğu) döndürür.
**
** 3. main fonksiyonu:
**    - ft_strlen fonksiyonunu kullanarak "Mr. Norkum Was Here Xd" karakter dizisinin uzunluklarını hesaplar ve ekrana yazdırır.
**
** 4. printf fonksiyonu:
**    - Length: [ %d ] formatıyla ft_strlen fonksiyonunun döndürdüğü karakter dizisinin uzunluğunu ekrana yazdırır.
**
** 5. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
**
** Not: Siz bunlardan sadece birini seçip kullanacaksınız yoksa kodunuz çalışmayacaktır.
*/
