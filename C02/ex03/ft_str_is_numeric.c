/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:19:27 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 19:47:48 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_str_is_numeric(char *str)
{
	while (*str) // str dizisi sonuna kadar döngüyü çalıştırır
		if (!('0' <= *str && *str++ <= '9')) // Eğer karakter '0' ile '9' arasında değilse, 0 döndürür
			return (0);
	return (1); // Tüm karakterler rakam ise 1 döndürür
}

int
	main(void)
{
	char str[] = "1234567890"; // Rakam içeren bir dizi tanımlar

	printf("[ %d ]\n", ft_str_is_numeric(str)); // str dizisinin yalnızca rakamlardan oluşup oluşmadığını kontrol eder ve sonucu ekrana yazdırır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** ft_str_is_numeric fonksiyonu:
**    - Parametre: char *str - Kontrol edilecek karakter dizisi.
**    - İşlevi: Verilen str dizisinin yalnızca rakam karakterlerinden oluşup oluşmadığını kontrol eder.
**    - Döndürdüğü Değerler:
**      - 1: Eğer str dizisi yalnızca rakam karakterleri içeriyorsa.
**      - 0: Eğer str dizisi rakam dışında başka karakterler içeriyorsa.
**
** main fonksiyonu:
**    - Örnek bir str dizisi tanımlar ve içine "1234567890" değerini atar.
**    - ft_str_is_numeric fonksiyonunu kullanarak str dizisinin yalnızca rakam karakterlerinden oluşup oluşmadığını kontrol eder.
**    - Sonucu printf fonksiyonuyla ekrana yazdırır.
**
** printf fonksiyonu:
**    - [ %d ] formatıyla ft_str_is_numeric fonksiyonunun döndürdüğü değeri ekrana yazdırır.
**
** return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/

