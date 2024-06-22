/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:56:16 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/20 23:10:12 by hkeles           ###   ########.fr       */
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
	long n;

	n = nb; // Verilen tamsayıyı long türünde bir değişkene kopyalar
	if (n < 0) // Eğer sayı negatifse
	{
		write(1, "-", 1); // '-' işaretini yazdırır
		n = 1 + ~n; // Negatif sayıyı pozitife çevirir (2'nin tümleme yöntemiyle)
	}
	if (n > 9) // Eğer sayı 9'dan büyükse
		ft_putnbr(n / 10); // Sayının bir basamak eksilmiş halini yazdırır
	write(1, &"0123456789"[n % 10], 1); // Sayının birler basamağını yazdırır
}

int
	main(void)
{
	ft_putnbr(-42); // ft_putnbr fonksiyonunu kullanarak -42 sayısını yazdırır
}

/*
** Bu C programı, verilen bir tamsayıyı (integer) karakter olarak standart çıkışa 
** yazdıran bir fonksiyon (ft_putnbr) ve bu fonksiyonu test eden main fonksiyonu 
** içerir. Fonksiyon, negatif sayıları da doğru şekilde işleyebilmek için özel 
** durumlar kontrol eder.
**
** Açıklama:
** - #include <unistd.h>: 'write' sistem çağrısı için gerekli olan başlık dosyası.
**
** Fonksiyonlar:
**
** ft_putnbr:
**   Verilen tamsayıyı karakter olarak standart çıkışa yazdırır.
**   - Parametre: int nb - Yazdırılacak tamsayı.
**   - İşlev:
**     - 'n' isimli bir 'long' değişkenine tamsayı 'nb' atanır.
**     - Eğer 'n' negatif ise, '-' işareti yazdırılır ve 'n' pozitife çevrilir.
**     - 'n' sayısı 9'dan büyükse, ondalık basamağa bölünür ve fonksiyon kendini 
**       tekrar çağırarak bir sonraki basamağı yazdırır.
**     - Birler basamağı, '0123456789' dizisinden alınarak yazdırılır.
**
** main:
**   Programın giriş noktasıdır. ft_putnbr fonksiyonunu çağırarak -42 sayısını 
**   yazdırır ve ardından programın başarıyla tamamlandığını belirtir.
**
** Notlar:
** - Negatif tamsayılar için, '-' işareti ayrı olarak yazdırıldığı için, 
**   pozitif tamsayılarla aynı yöntemle işlenir.
*/
