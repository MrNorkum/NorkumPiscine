/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:21:46 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:25:41 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

char
	*ft_strupcase(char *str)
{
	int i;

	i = -1;
	while (str[++i]) // str dizisi sonuna kadar döngüyü çalıştırır
		str[i] -= ('a' <= str[i] && str[i] <= 'z') * 32; // Küçük harfleri büyük harfe dönüştürür
	return (str); // Dönüştürülmüş str dizisinin başlangıç adresini döndürür
}

int main(void)
{
	char str[] = "Mr. Norkum Was Here Xd"; // Karakter dizisi tanımlar

	printf("[ %s ]\n", ft_strupcase(str)); // str dizisindeki küçük harfleri büyük harfe dönüştürür ve sonucu ekrana yazdırır

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** ft_strupcase fonksiyonu:
**    - Parametre: char *str - Büyük/küçük harf dönüşümü yapılacak karakter dizisi.
**    - İşlevi: Verilen str dizisindeki küçük harfleri büyük harfe dönüştürür.
**    - Dönüş Değeri: Dönüştürülmüş str dizisinin başlangıç adresini döndürür.
**
** main fonksiyonu:
**    - Örnek bir str dizisi tanımlar ve içine "Mr. Norkum Was Here Xd" değerini atar.
**    - ft_strupcase fonksiyonunu kullanarak str dizisindeki küçük harfleri büyük harfe dönüştürür ve sonucu formatlı olarak ekrana yazdırır.
**
** printf fonksiyonu:
**    - [ %s ] formatıyla ft_strupcase fonksiyonunun döndürdüğü değeri ekrana yazdırır.
**
** return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
