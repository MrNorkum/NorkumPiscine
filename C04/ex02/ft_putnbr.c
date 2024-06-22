/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:56:26 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 22:47:08 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_putnbr(int nb)
{
	long n; // n değişkenini long olarak tanımla

	n = nb; // n'ye nb değerini ata
	if (n < 0) // Eğer n negatifse
	{
		write(1, "-", 1); // Eksi işaretini ekrana yazdır
		n = 1 + ~n; // n'yi pozitif yap
	}
	if (n > 9) // Eğer n 9'dan büyükse
		ft_putnbr(n / 10); // Sayıyı 10'a bölerek recursive çağrı yap
	write(1, &"0123456789"[n % 10], 1); // Kalan basamağı ekrana yazdır
}

int
	main(void)
{
	ft_putnbr(-1342); // ft_putnbr fonksiyonu ile -1342 sayısını ekrana yazdır
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_putnbr fonksiyonunu kullanarak -1342 tam sayısını ekrana yazdırır.
**
** 1. ft_putnbr fonksiyonu:
**    - Parametre:
**      - int nb: Yazılacak tam sayı.
**    - İşlev:
**      - Verilen tam sayıyı ekrana yazdırır.
**      - Eğer tam sayı negatif ise, işareti ekrana yazdırır ve sayıyı pozitif yapar.
**      - Sayının her basamağını recursive (özyineli) bir şekilde ekrana yazar.
**
** 2. main fonksiyonu:
**    - ft_putnbr fonksiyonunu kullanarak -1342 tam sayısını ekrana yazdırır.
**
** 3. write fonksiyonu:
**    - Karakterleri ekrana yazdırmak için kullanılır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
