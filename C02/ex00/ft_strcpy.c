/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:17:55 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 18:48:41 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

char *ft_strcpy(char *dest, const char *src)
{
    char *original_dest;
	
	
	original_dest = dest; // Hedef dizisinin başlangıç adresini saklar
    while (*src)
        *dest++ = *src++; // Kaynak dizisinin karakterlerini hedef diziye kopyalar
	
    *dest = '\0'; // Hedef dizisinin sonuna null ('\0') karakter ekler

    return original_dest; // Hedef dizisinin başlangıç adresini döndürür
}

int main(void)
{
    char dest[] = "1234567890"; // Hedef dizi
    char source[] = "ABCDEFGH"; // Kaynak dizi

    printf("First: [ %s ]\n", dest); // Kopyalama öncesi hedef diziyi yazdırır
    ft_strcpy(dest, source); // Kaynak diziyi hedef diziye kopyalar
    printf("End: [ %s ]\n", dest); // ft_strcpy ile kopyalanan hedef diziyi yazdırır

    return 0; // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, bir C fonksiyonu (ft_strcpy) ile bir karakter dizisini (string) başka bir karakter dizisine kopyalamayı gösterir.
**
** 1. ft_strcpy fonksiyonu:
**    - Parametreler:
**      - char *dest: Kopyalanan karakter dizisinin hedefi (kopya yapılacak dizi).
**      - const char *src: Kopyalanacak karakter dizisi (kaynak dizi).
**    - İşlevi:
**      - Kaynak dizideki karakterleri hedef diziye kopyalar.
**      - Kopyalama işlemi sonunda hedef dizisinin sonuna null ('\0') karakter ekler.
**      - Hedef dizisinin başlangıç adresini döndürür.
**
** 2. main fonksiyonu:
**    - Örnek bir hedef (dest) ve kaynak (source) dizisi tanımlar.
**    - ft_strcpy fonksiyonu ile kaynak diziyi hedef diziye kopyalar ve sonucu yazdırır.
**
** 3. printf fonksiyonları:
**    - "First:" ifadesiyle kopyalama öncesi hedef diziyi yazdırır.
**    - "End:" ifadesiyle kopyalanan hedef diziyi yazdırır.
**
** 4. return 0;
**    - Programın başarıyla tamamlandığını belirtir.
*/