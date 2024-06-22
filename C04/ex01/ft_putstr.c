/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:56:20 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 22:38:57 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_putstr(char *str)
{
	if (*str == '\0') // Eğer karakter dizisinin başındaki karakter null karakter ise
		return ; // Fonksiyonu sonlandır
	write(1, str, 1); // İlk karakteri ekrana yaz
	ft_putstr(str + 1); // Kalan karakterler için fonksiyonu tekrar çağır
}

int
	main(void)
{
	ft_putstr("Mr. Norkum Was Here Xd"); // ft_putstr fonksiyonu ile karakter dizisini ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_putstr fonksiyonunu kullanarak "Mr. Norkum Was Here Xd" karakter dizisini ekrana yazdırır.
**
** 1. ft_putstr fonksiyonu:
**    - Parametre:
**      - char *str: Yazılacak karakter dizisi.
**    - İşlev:
**      - Verilen karakter dizisini recursive (özyineli) bir şekilde ekrana yazdırır.
**      - Null karakter '\0' bulunana kadar karakterleri ekrana yazar.
**      - Eğer karakter dizisinin başındaki karakter null karakter '\0' ise fonksiyonu sonlandırır.
**      - Aksi takdirde, ilk karakteri ekrana yazar ve dizinin kalan kısmı için fonksiyonu tekrar çağırır.
**
** 2. main fonksiyonu:
**    - ft_putstr fonksiyonunu kullanarak "Mr. Norkum Was Here Xd" karakter dizisini ekrana yazdırır.
**
** 3. write fonksiyonu:
**    - İlk karakteri ekrana yazar.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/