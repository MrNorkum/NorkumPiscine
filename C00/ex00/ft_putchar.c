/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:37:50 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/20 22:12:51 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_putchar(char c)
{
	write(1, &c, 1); // Verilen karakteri standart çıkışa yazdırır
}

int
	main(void)
{
	ft_putchar('a'); // 'a' karakterini yazdırır
	ft_putchar(97);  // ASCII değeri 97 olan karakteri (yine 'a') yazdırır
}

/*
** Bu C programı, standart çıkışa (terminal) bir karakter yazdıran basit bir 
** fonksiyon (ft_putchar) içerir. ft_putchar fonksiyonu, write sistem çağrısını 
** kullanarak verilen karakteri yazar. Program, main fonksiyonu içerisinde iki 
** farklı şekilde ft_putchar fonksiyonunu çağırarak karakterleri yazdırır: 
** birincisi doğrudan bir karakter ('a') ile, ikincisi ise karakterin ASCII 
** değerini (97) kullanarak.
**
** Detaylar:
** - #include <unistd.h>: write sistem çağrısı için gerekli olan başlık dosyası.
** - ft_putchar(char c): Parametre olarak aldığı karakteri write fonksiyonu ile 
**   standart çıkışa yazdırır.
** - main(void): Programın giriş noktası, iki farklı ft_putchar çağrısı yaparak 
**   'a' karakterini yazar.
*/
