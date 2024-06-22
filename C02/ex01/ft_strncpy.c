/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:18:33 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 19:02:42 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

char
	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i; // Döngü değişkeni

	i = 0; // i'yi 0 olarak başlatır
	while (src[i] && i < n) // src dizisini ve n karakter sınırını kontrol ederek kopyalama yapar
	{
		dest[i] = src[i]; // src'den dest'e karakter kopyalar
		i++; // Sonraki karaktere geçiş
	}
	while (i < n) // n karakterden az ise kalan bölümü '\0' ile doldurur
	{
		dest[i] = '\0'; // dest dizisine '\0' karakteri ekler
		i++; // Sonraki karaktere geçiş
	}
	return (dest); // Kopyalanan dest dizisinin başlangıç adresini döndürür
}

int	main(void)
{
	char	dest[] = "1234567890"; // Hedef dizi
	char	source[] = "ABCDEFGH"; // Kaynak dizi

	printf("First: [ %s ]\n", dest); // Kopyalama öncesi hedef diziyi (dest) yazdırır
	ft_strncpy(dest, source, 5); // dest dizisine source dizisinin ilk 5 karakterini kopyalar
	printf("End: [ %s ]\n", dest); // Kopyalama sonrası hedef diziyi (dest) yazdırır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strncpy fonksiyonunu kullanarak bir karakter dizisinin belirtilen maksimum sayıda karakterini başka bir karakter dizisine kopyalamayı gösterir.
**
** 1. ft_strncpy fonksiyonu:
**    - Parametreler:
**      - char *dest: Kopyalanan karakter dizisinin hedefi (kopya yapılacak dizi).
**      - char *src: Kopyalanacak karakter dizisi (kaynak dizi).
**      - unsigned int n: Kopyalanacak maksimum karakter sayısı.
**    - İşlevi:
**      - src dizisinden en fazla n karakteri dest dizisine kopyalar.
**      - Eğer src'de n karakterden az varsa veya src'de '\0' (null karakter) ile karşılaşılırsa, dest'i '\0' ile doldurur.
**      - Kopyalanan dest dizisinin başlangıç adresini döndürür.
**
** 2. main fonksiyonu:
**    - Örnek bir hedef (dest) ve kaynak (source) dizisi tanımlar.
**    - ft_strncpy fonksiyonu ile source dizisinin ilk 5 karakterini dest dizisine kopyalar ve sonucu yazdırır.
**
** 3. printf fonksiyonları:
**    - "First:" ifadesiyle kopyalama öncesi hedef diziyi yazdırır.
**    - "End:" ifadesiyle kopyalanan hedef diziyi yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
