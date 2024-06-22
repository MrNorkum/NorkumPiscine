/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:20:44 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:25:30 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_str_is_printable(char *str)
{
	while (*str) // str dizisi sonuna kadar döngüyü çalıştırır
		if (!(32 <= *str && *str <= 126)) // Eğer karakter ASCII 32 (space) ile 126 (tilde '~') arasında değilse, 0 döndürür
			return (0);
		else
			str++; // Sonraki karaktere geçiş
	return (1); // Tüm karakterler basılabilir karakterler ise 1 döndürür
}

int
	main(void)
{
	char str[] = "Mr. Norkum Was Here ?!"; // Basılabilir karakterler içeren bir dizi tanımlar

	printf("[ %d ]\n", ft_str_is_printable(str)); // ft_str_is_printable fonksiyonunu kullanarak str dizisinin yalnızca basılabilir karakterlerden oluşup oluşmadığını kontrol eder ve sonucu ekrana yazdırır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** ft_str_is_printable fonksiyonu:
**    - Parametre: char *str - Kontrol edilecek karakter dizisi.
**    - İşlevi: Verilen str dizisinin yalnızca basılabilir (ASCII 32 ile 126 arasındaki) karakterlerden oluşup oluşmadığını kontrol eder.
**    - Döndürdüğü Değerler:
**      - 1: Eğer str dizisi yalnızca basılabilir karakterler içeriyorsa.
**      - 0: Eğer str dizisi basılabilir karakter dışında başka karakterler içeriyorsa.
**
** main fonksiyonu:
**    - Örnek bir str dizisi tanımlar ve içine "Mr. Norkum Was Here ?!" değerini atar.
**    - ft_str_is_printable fonksiyonunu kullanarak str dizisinin yalnızca basılabilir karakterlerden oluşup oluşmadığını kontrol eder.
**    - Sonucu printf fonksiyonuyla ekrana yazdırır.
**
** printf fonksiyonu:
**    - [ %d ] formatıyla ft_str_is_printable fonksiyonunun döndürdüğü değeri ekrana yazdırır.
**
** return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
