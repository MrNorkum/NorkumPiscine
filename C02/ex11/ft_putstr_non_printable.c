/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:23:27 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:11:26 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (32 <= *str && *str <= 126) // Yazdırılabilir karakterler aralığı (ASCII 32-126)
			write(1, str, 1); // Direkt olarak karakteri yazdır
		else
		{
			write(1, "\\", 1); // "\\" yazdır (başlangıç)
			write(1, &"0123456789abcdef"[*str / 16], 1); // Karakterin üst 4 bitini hexadecimal olarak yazdır
			write(1, &"0123456789abcdef"[*str % 16], 1); // Karakterin alt 4 bitini hexadecimal olarak yazdır
		}
		str++; // Sonraki karaktere geç
	}
}

int
	main(void)
{
	char	str[] = "Mr. \norkum Was Here Xd"; // Karakter dizisi tanımı

	ft_putstr_non_printable(str); // Karakter dizisini ekrana yazdır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_putstr_non_printable fonksiyonu ile verilen bir karakter dizisini ekrana yazdırmayı gösterir.
**
** 1. ft_putstr_non_printable fonksiyonu:
**    - Parametreler:
**      - char *str: Yazdırılacak karakter dizisi.
**    - İşlevi:
**      - Verilen karakter dizisini ekrana yazdırır.
**      - Eğer karakter yazdırılabilir (ASCII 32-126 arasında ise), direkt olarak yazdırır.
**      - Yazdırılamayan karakterler için "\\xx" formatında hexadecimal değerlerini ekrana yazdırır.
**
** 2. main fonksiyonu:
**    - Örnek bir karakter dizisi (str) tanımlar.
**    - ft_putstr_non_printable fonksiyonu ile karakter dizisini ekrana yazdırır.
**
** 3. write fonksiyonu:
**    - "unistd.h" kütüphanesinden write fonksiyonu, verilen dosya tanımlayıcısına belirtilen sayıda byte veri yazar.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
