/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:28:24 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:26:19 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i; // Döngü değişkeni

	i = 0; // i'yi 0 olarak başlat
	if (n == 0) // Karşılaştırılacak karakter sayısı 0 ise
		return (0); // 0 döndür
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1) // s1 ve s2 dizilerini n kadar veya sona kadar karşılaştır
		i++; // Sonraki karaktere geç
	return (s1[i] - s2[i]); // Karşılaştırma sonucunu döndür (ASCII değer farkı)
}

int
	main(void)
{
	char str[] = "Mr. Norkum wAS Here Xd"; // İlk karakter dizisi
	char str2[] = "Mr. Norkum WAS Here Xd"; // İkinci karakter dizisi

	printf("[ %d ]\n", ft_strncmp(str, str2, 10)); // İlk 10 karakteri karşılaştırma sonucunu ekrana yazdır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strncmp fonksiyonu ile verilen iki karakter dizisini belirtilen maksimum karakter sayısı (n) kadar karşılaştırıp sonucunu döndürmeyi gösterir.
**
** 1. ft_strncmp fonksiyonu:
**    - Parametreler:
**      - char *s1: Karşılaştırılacak birinci karakter dizisi.
**      - char *s2: Karşılaştırılacak ikinci karakter dizisi.
**      - unsigned int n: Karşılaştırılacak maksimum karakter sayısı.
**    - İşlevi:
**      - Verilen iki karakter dizisini, belirtilen maksimum karakter sayısı (n) kadar karşılaştırır.
**      - Karakterler eşit olduğu sürece ilerler ve maksimum karakter sayısına veya karakter dizilerinin sonuna gelinceye kadar devam eder.
**      - Karakterler farklı olduğunda farklılık oluşan karakterlerin ASCII değerlerinin farkını döndürür.
**      - Eğer maksimum karakter sayısına ulaşılırsa veya karakter dizileri sonlanırsa ve tüm karakterler eşitse, 0 döndürür.
**
** 2. main fonksiyonu:
**    - Örnek iki karakter dizisi (str ve str2) tanımlar.
**    - ft_strncmp fonksiyonu ile bu iki karakter dizisini ilk 10 karakter kadar karşılaştırır ve sonucu ekrana yazdırır.
**
** 3. printf fonksiyonu:
**    - [ %d ] formatıyla ft_strncmp fonksiyonunun döndürdüğü sonucu ekrana yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
