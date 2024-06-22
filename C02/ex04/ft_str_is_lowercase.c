/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:19:49 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:23:09 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_str_is_lowercase(char *str)
{
	while (*str) // str dizisi sonuna kadar döngüyü çalıştırır
		if (!('a' <= *str && *str++ <= 'z')) // Eğer karakter 'a' ile 'z' arasında değilse, 0 döndürür
			return (0);
	return (1); // Tüm karakterler küçük harf ise 1 döndürür
}

int
	main(void)
{
	char str[] = "mrnorkumwasherexd"; // Küçük harf içeren bir dizi tanımlar

	printf("[ %d ]\n", ft_str_is_lowercase(str)); // str dizisinin yalnızca küçük harflerden oluşup oluşmadığını kontrol eder ve sonucu ekrana yazdırır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** ft_str_is_lowercase fonksiyonu:
**    - Parametre: char *str - Kontrol edilecek karakter dizisi.
**    - İşlevi: Verilen str dizisinin yalnızca küçük harf karakterlerinden oluşup oluşmadığını kontrol eder.
**    - Döndürdüğü Değerler:
**      - 1: Eğer str dizisi yalnızca küçük harf karakterleri içeriyorsa.
**      - 0: Eğer str dizisi küçük harf dışında başka karakterler içeriyorsa.
**
** main fonksiyonu:
**    - Örnek bir str dizisi tanımlar ve içine "mrnorkumwasherexd" değerini atar.
**    - ft_str_is_lowercase fonksiyonunu kullanarak str dizisinin yalnızca küçük harf karakterlerinden oluşup oluşmadığını kontrol eder.
**    - Sonucu printf fonksiyonuyla ekrana yazdırır.
**
** printf fonksiyonu:
**    - [ %d ] formatıyla ft_str_is_lowercase fonksiyonunun döndürdüğü değeri ekrana yazdırır.
**
** return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
