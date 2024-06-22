/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:54:27 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:39:39 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

char
	*ft_strstr(char *str, char *to_find)
{
	int t; // to_find dizisi üzerinde döngü değişkeni

	if (!to_find[0]) // Aranan dizinin ilk karakteri boşsa, str dizisini döndür
		return (str);

	while (*str) // str dizisi sonuna kadar dön
	{
		t = 0; // t'yi sıfırla
		while (to_find[t] == *(str + t) && *(str + t)) // to_find ve str dizilerini karşılaştır
			t++; // t'yi artır
		if (!to_find[t]) // to_find dizisi sonuna ulaşıldıysa
			return (str); // str dizisinin başlangıç adresini döndür
		str++; // str dizisinde bir sonraki karaktere geç
	}
	return (0); // Eşleşme bulunamadı, NULL (0) döndür
}

int
	main(void)
{
	char str[] = "Nobody and Norkum Was Here Xd"; // str dizisi tanımı
	char to_find[] = "Norkum"; // aranacak to_find dizisi

	printf("%s\n", ft_strstr(str, to_find)); // Bulunan pozisyonun adresini ekrana yazdır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strstr fonksiyonu ile bir karakter dizisi içinde belirtilen bir alt dizi (to_find) araması yapmayı gösterir.
**
** 1. ft_strstr fonksiyonu:
**    - Parametreler:
**      - char *str: Arama yapılacak karakter dizisi.
**      - char *to_find: Aranan karakter dizisi.
**    - İşlevi:
**      - str içinde to_find karakter dizisini arar.
**      - İlk eşleşme bulunduğunda, str dizisinin başlangıç adresini döndürür.
**      - Eşleşme bulunamazsa NULL (0) pointerı döndürür.
**
** 2. main fonksiyonu:
**    - Örnek bir str ve to_find dizisi tanımlar.
**    - ft_strstr fonksiyonu ile to_find dizisini str dizisi içinde arar ve bulduğu ilk pozisyonun adresini ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - "%s\n" formatıyla ft_strstr fonksiyonunun döndürdüğü adresi ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
