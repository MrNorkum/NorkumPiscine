/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:19:00 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:23:09 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z')))
			return (0); // Eğer karakter harf değilse (A-Z veya a-z aralığında değilse), 0 döndürür.
		str++;
	}
	return (1); // Tüm karakterler harf ise 1 döndürür.
}

int
	main(void)
{
	char	str[] = "MrNorkumWasHereXd";

	printf("[ %d ]\n", ft_str_is_alpha(str)); // str dizisinin yalnızca harflerden oluşup oluşmadığını kontrol eder ve sonucu ekrana yazdırır.

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** ft_str_is_alpha fonksiyonu:
**    - Parametre: char *str - Kontrol edilecek karakter dizisi.
**    - İşlevi: Verilen str dizisinin yalnızca harf karakterlerinden oluşup oluşmadığını kontrol eder.
**    - Döndürdüğü Değerler:
**      - 1: Eğer str dizisi yalnızca harf karakterleri içeriyorsa.
**      - 0: Eğer str dizisi harf dışında başka karakterler içeriyorsa.
**
** main fonksiyonu:
**    - Örnek bir str dizisi tanımlar ve içine "MrNorkumWasHereXd" değerini atar.
**    - ft_str_is_alpha fonksiyonunu kullanarak str dizisinin yalnızca harf karakterlerinden oluşup oluşmadığını kontrol eder.
**    - Sonucu printf fonksiyonuyla ekrana yazdırır.
**
** printf fonksiyonu:
**    - [ %d ] formatıyla ft_str_is_alpha fonksiyonunun döndürdüğü değeri ekrana yazdırır.
**
** return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/