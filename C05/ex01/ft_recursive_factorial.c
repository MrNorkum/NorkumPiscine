/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:59:12 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 23:13:03 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_recursive_factorial(int nb)
{
	if (!nb || nb == 1) // Eğer nb 0 veya 1 ise
		return (1); // 1 döndür (0! ve 1! = 1)
	else if (2 <= nb && nb <= 12) // Eğer nb 2 ile 12 arasında ise
		return (nb * ft_recursive_factorial(nb - 1)); // nb * (nb-1)'in faktöriyelini döndür
	return (0); // nb geçerli aralıkta değilse 0 döndür
}

int
	main(void)
{
	printf("[ %d ]\n", ft_recursive_factorial(7)); // ft_recursive_factorial fonksiyonu ile 7'nin faktöriyelini hesapla ve sonucu ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_recursive_factorial fonksiyonunu kullanarak 7 sayısının faktöriyelini hesaplar ve sonucu ekrana yazdırır.
**
** 1. ft_recursive_factorial fonksiyonu:
**    - Parametre:
**      - int nb: Faktöriyeli hesaplanacak sayı.
**    - İşlev:
**      - Verilen sayının faktöriyelini recursive (özyineli) olarak hesaplar.
**      - Eğer sayı 0 veya 1 ise 1 döndürür.
**      - Eğer sayı 2 ile 12 arasında ise, sayının faktöriyelini hesaplamak için recursive çağrı yapar.
**      - Verilen sayı geçerli aralıkta değilse 0 döndürür.
**
** 2. main fonksiyonu:
**    - ft_recursive_factorial fonksiyonunu kullanarak 7 sayısının faktöriyelini hesaplar ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %d ] formatıyla ft_recursive_factorial fonksiyonunun döndürdüğü faktöriyel değerini ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
