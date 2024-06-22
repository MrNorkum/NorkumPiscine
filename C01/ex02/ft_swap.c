/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:06:46 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 17:39:10 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_swap(int *a, int *b)
{
	// *a ve *b işaret ettikleri tamsayıların değerlerini birbirleriyle değiştirir
	*a = *a + *b; // *a'nın değerine *a ve *b'nin toplamını ata
	*b = *a - *b; // *b'nin değerine *a ve *b'nin farkını ata (yeni *a - eski *b)
	*a = *a - *b; // *a'nın değerine *a ve *b'nin farkını ata (yeni *b - eski *b)
}

void
	ft_swap(int *a, int *b)
{
	// Geçici bir değişken kullanarak *a'nın değerini sakla
	int temp = *a;
	
	// *a'nın değerini *b'nin değeriyle değiştir
	*a = *b;
	
	// Geçici değişkenin içinde saklanan eski *a değerini *b'ye ata
	*b = temp;
}

int
	main(void)
{
	int x = 13; // x adında bir tamsayı değişkeni tanımla ve başlangıç değeri 13 olarak ata
	int y = 42; // y adında bir tamsayı değişkeni tanımla ve başlangıç değeri 42 olarak ata
	
	// ft_swap fonksiyonunu çağırarak x ve y değerlerini yer değiştir
	ft_swap(&x, &y);
	
	// Yeni x ve y değerlerini ekrana yazdır
	printf("New X: %d\nNew Y: %d\n", x, y);
}

/*
** ft_swap:
**   Verilen iki tamsayının değerlerini yer değiştirir.
**   - Parametreler:
**     - int *a: Değiştirilecek ilk tamsayının adresi.
**     - int *b: Değiştirilecek ikinci tamsayının adresi.
**   - İşlev:
**     - *a ve *b işaret ettikleri tamsayıların değerlerini birbirleriyle değiştirir.
*/
