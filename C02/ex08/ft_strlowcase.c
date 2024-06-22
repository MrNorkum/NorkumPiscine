/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:22:18 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:25:47 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

char
	*ft_strlowcase(char *str)
{
	int i;

	i = -1;
	while (str[++i]) // str dizisi sonuna kadar döngüyü çalıştırır
		str[i] += ('A' <= str[i] && str[i] <= 'Z') * 32; // Büyük harfleri küçük harfe dönüştürür
	return (str); // Dönüştürülmüş str dizisinin başlangıç adresini döndürür
}

int main(void)
{
	char str[] = "Mr. Norkum Was Here Xd"; // Karakter dizisi tanımlar

	printf("[ %s ]\n", ft_strlowcase(str)); // str dizisindeki büyük harfleri küçük harfe dönüştürür ve sonucu ekrana yazdırır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** ft_strlowcase fonksiyonu:
**    - Parametre: char *str - Küçük/büyük harf dönüşümü yapılacak karakter dizisi.
**    - İşlevi: Verilen str dizisindeki büyük harfleri küçük harfe dönüştürür.
**    - Dönüş Değeri: Dönüştürülmüş str dizisinin başlangıç adresini döndürür.
**
** main fonksiyonu:
**    - Örnek bir str dizisi tanımlar ve içine "Mr. Norkum Was Here Xd" değerini atar.
**    - ft_strlowcase fonksiyonunu kullanarak str dizisindeki büyük harfleri küçük harfe dönüştürür ve sonucu ekrana yazdırır.
**
** printf fonksiyonu:
**    - [ %s ] formatıyla ft_strlowcase fonksiyonunun döndürdüğü değeri ekrana yazdırır.
**
** return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
