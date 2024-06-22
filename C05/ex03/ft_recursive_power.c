/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:59:28 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 23:39:46 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_recursive_power(int nb, int power)
{
	if (power <= 0) // Eğer power sıfır veya negatifse
		return (!power); // power sıfırsa 1 döndür, negatifse 0 döndür
	return (nb * ft_recursive_power(nb, power - 1)); // nb'yi (power - 1)'in üssü ile çarp ve döndür
}

int
	main(void)
{
	printf("[ %d ]\n", ft_recursive_power(2, 7)); // ft_recursive_power fonksiyonu ile 2^7 hesapla ve sonucu ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_recursive_power fonksiyonunu kullanarak 2 tabanı ve 7 üssü ile üs alınmış sonucu hesaplar ve sonucu ekrana yazdırır.
**
** 1. ft_recursive_power fonksiyonu:
**    - Parametreler:
**      - int nb: Taban sayısı.
**      - int power: Üs sayısı.
**    - İşlev:
**      - Verilen sayının recursive (özyineli) olarak üs alınmış sonucunu hesaplar.
**      - Eğer üs 0 veya negatifse, üs alınmış sonucu döndürür.
**      - Üs pozitif ise, recursive olarak üs alınmış sonucu hesaplar.
**
** 2. main fonksiyonu:
**    - ft_recursive_power fonksiyonunu kullanarak 2 tabanı ve 7 üssü ile üs alınmış sonucu hesaplar ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %d ] formatıyla ft_recursive_power fonksiyonunun döndürdüğü üs alınmış sonucu ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
