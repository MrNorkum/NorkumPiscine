/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:47:25 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/20 23:10:05 by hkeles           ###   ########.fr       */
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

void
	ft_print_comb2(void)
{
    int a = 0;
    int b = 1;
    
    while (a <= 98) // İlk rakam '0' ile '98' arasında olduğu sürece devam et
    {
        ft_putchar(a / 10 + '0'); // İlk rakamın onlar basamağı
        ft_putchar(a % 10 + '0'); // İlk rakamın birler basamağı
        ft_putchar(' '); // Boşluk ekle
        ft_putchar(b / 10 + '0'); // İkinci rakamın onlar basamağı
        ft_putchar(b % 10 + '0'); // İkinci rakamın birler basamağı
        write(1, ", ", (a != 98) * 2); // Virgül ve boşluk ekle (son kombinasyon hariç)
        
        b++; // İkinci rakamı bir artır
        
        if (b > 99) // İkinci rakam '99'u geçerse
            b = ++a + 1; // İlk rakamı bir artır ve ikinciyi yeniden başlat
    }
}

int
	main(void)
{
    ft_print_comb2(); // ft_print_comb2 fonksiyonunu çağırır
}

/*
** Bu C programı, 0 ile 99 arasındaki iki rakamlı sayıların kombinasyonlarını 
** yazdıran bir fonksiyon (ft_print_comb2) içerir. Fonksiyon, her bir kombinasyonu 
** iki rakam olarak standart çıkışa yazdırır ve virgül-boşluk ile ayırır.
**
** Detaylar:
** - #include <unistd.h>: write sistem çağrısı için gerekli olan başlık dosyası.
** - ft_putchar(char c): Verilen karakteri standart çıkışa yazdıran yardımcı bir 
**   fonksiyon.
** - ft_print_comb2(void): 0 ile 99 arasındaki iki rakamlı sayıların kombinasyonlarını 
**   üreterek standart çıkışa yazdırır.
** - main(void): Programın giriş noktası, ft_print_comb2 fonksiyonunu çağırır.
*/
