/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:22:40 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:25:53 by hkeles           ###   ########.fr       */
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

char
	*ft_strcapitalize(char *str)
{
	int i;
	int control;

	i = -1;
	control = 1;
	ft_strlowcase(str); // str dizisindeki harfleri küçük harfe dönüştürür
	while (str[++i]) // str dizisi sonuna kadar döngüyü çalıştırır
	{
		if ('a' <= str[i] && str[i] <= 'z') // Eğer karakter küçük harf ise
		{
			if (control) // Eğer kontrol flag'i true ise (ilk harf ise)
			{
				str[i] -= 32; // Harfi büyük harfe dönüştürür
				control = 0; // Kontrol flag'ini kapatır
			}
		}
		else // Eğer karakter harf değilse
			control = !('0' <= str[i] && str[i] <= '9'); // Kontrol flag'ini rakam olup olmadığını kontrol ederek ayarlar
	}
	return (str); // Dönüştürülmüş str dizisinin başlangıç adresini döndürür
}

int
	main(void)
{
	char str[] = "mR. nORkum wAS HeRe 13XD"; // Karakter dizisi tanımlar

	printf("%s\n", ft_strcapitalize(str)); // str dizisindeki cümle başlarını büyük harfe, diğer harfleri küçük harfe dönüştürür ve sonucu ekrana yazdırır

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
** ft_strcapitalize fonksiyonu:
**    - Parametre: char *str - Cümle başlarını büyük harfe, diğer harfleri küçük harfe dönüştürecek karakter dizisi.
**    - İşlevi: Verilen str dizisindeki cümle başlarını büyük harfe, diğer harfleri küçük harfe dönüştürür.
**    - Dönüş Değeri: Dönüştürülmüş str dizisinin başlangıç adresini döndürür.
**
** main fonksiyonu:
**    - Örnek bir str dizisi tanımlar ve içine "mR. nORkum wAS HeRe 13XD" değerini atar.
**    - ft_strcapitalize fonksiyonunu kullanarak str dizisindeki cümle başlarını büyük harfe, diğer harfleri küçük harfe dönüştürür ve sonucu ekrana yazdırır.
**
** printf fonksiyonu:
**    - [ %s ] formatıyla ft_strcapitalize fonksiyonunun döndürdüğü değeri ekrana yazdırır.
**
** return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/
