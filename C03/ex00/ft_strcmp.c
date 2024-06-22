/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:27:33 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:26:12 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_strcmp(char *s1, char *s2)
{
	int	i; // Döngü değişkeni

	i = 0; // i'yi 0 olarak başlat
	while (s1[i] && s2[i] && s1[i] == s2[i]) // s1 ve s2 dizilerini karşılaştır, s1 ve s2 aynı ve sona gelmemişse devam et
		i++; // Sonraki karaktere geç
	return (s1[i] - s2[i]); // Karşılaştırma sonucunu döndür (ASCII değer farkı)
}

int
	main(void)
{
	char	str1[] = "Mr. Norkum wAS Here Xd"; // İlk karakter dizisi
	char	str2[] = "Mr. Norkum WAS Here Xd"; // İkinci karakter dizisi

	printf("[ %d ]\n", ft_strcmp(str1, str2)); // Karakter dizilerini karşılaştırma sonucunu ekrana yazdır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strcmp fonksiyonu ile verilen iki karakter dizisini karşılaştırıp sonucunu döndürmeyi gösterir.
**
** 1. ft_strcmp fonksiyonu:
**    - Parametreler:
**      - char *s1: Karşılaştırılacak birinci karakter dizisi.
**      - char *s2: Karşılaştırılacak ikinci karakter dizisi.
**    - İşlevi:
**      - Verilen iki karakter dizisini karşılaştırır.
**      - Karakterlerin eşit olduğu sürece ilerler.
**      - Karakterler farklı olduğunda farklılık oluşan karakterlerin ASCII değerlerinin farkını döndürür.
**      - Eğer karakter dizileri sonlanırsa ve tüm karakterler eşitse, 0 döndürür.
**
** 2. main fonksiyonu:
**    - Örnek iki karakter dizisi (str1 ve str2) tanımlar.
**    - ft_strcmp fonksiyonu ile bu iki karakter dizisini karşılaştırır ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %d ] formatıyla ft_strcmp fonksiyonunun döndürdüğü sonucu ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
