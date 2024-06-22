/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:20:20 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 19:47:37 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_str_is_uppercase(char *str)
{
	while (*str) // str dizisi sonuna kadar döngüyü çalıştırır
		if (!('A' <= *str && *str++ <= 'Z')) // Eğer karakter 'A' ile 'Z' arasında değilse, 0 döndürür
			return (0);
	return (1); // Tüm karakterler büyük harf ise 1 döndürür
}

int
	main(void)
{
	char str[] = "MRNORKUMWASHEREXD"; // Büyük harf içeren bir dizi tanımlar

	printf("[ %d ]\n", ft_str_is_uppercase(str)); // str dizisinin yalnızca büyük harflerden oluşup oluşmadığını kontrol eder ve sonucu ekrana yazdırır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** ft_str_is_uppercase fonksiyonu:
**    - Parametre: char *str - Kontrol edilecek karakter dizisi.
**    - İşlevi: Verilen str dizisinin yalnızca büyük harf karakterlerinden oluşup oluşmadığını kontrol eder.
**    - Döndürdüğü Değerler:
**      - 1: Eğer str dizisi yalnızca büyük harf karakterleri içeriyorsa.
**      - 0: Eğer str dizisi büyük harf dışında başka karakterler içeriyorsa.
**
** main fonksiyonu:
**    - Örnek bir str dizisi tanımlar ve içine "MRNORKUMWASHEREXD" değerini atar.
**    - ft_str_is_uppercase fonksiyonunu kullanarak str dizisinin yalnızca büyük harf karakterlerinden oluşup oluşmadığını kontrol eder.
**    - Sonucu printf fonksiyonuyla ekrana yazdırır.
**
** printf fonksiyonu:
**    - [ %d ] formatıyla ft_str_is_uppercase fonksiyonunun döndürdüğü değeri ekrana yazdırır.
**
** return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
