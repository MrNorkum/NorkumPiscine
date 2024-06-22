/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:14:28 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:23:09 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	// Eğer *b sıfırsa bölme işlemi tanımsız olur, bu yüzden işlemi sonlandırıyoruz
	if (*b == 0)
		return ;
	// *a'nın *b'ye bölünmesiyle elde edilen bölümü geçici değişkene ata
	div = *a / *b;
	// *a'nın *b'ye bölünmesiyle elde edilen kalanı *b işaretçisinin gösterdiği yere yaz
	*b = *a % *b;
	// Bölüm sonucunu *a işaretçisinin gösterdiği yere yaz
	*a = div;
}

int
	main(void)
{
	int	x = 10; // İlk tamsayı
	int	y = 3;  // İkinci tamsayı
	
	// ft_ultimate_div_mod fonksiyonunu çağırarak x ve y'nin değerlerini değiştir
	ft_ultimate_div_mod(&x, &y);
	
	// x ve y'nin yeni değerlerini ekrana yazdır
	printf("%d%d SJ\n", x, y);
}

/*
** ft_ultimate_div_mod:
**   Verilen iki tamsayı işaretçisinin değerlerini kullanarak bölme ve mod işlemlerini gerçekleştirir
**   ve sonuçları ilgili işaretçilere atar.
**   - Parametreler:
**     - int *a: Bölünen tamsayının adresi.
**     - int *b: Bölen tamsayının adresi.
**   - İşlev:
**     - *a ve *b değerlerini kullanarak *a / *b ve *a % *b işlemlerini gerçekleştirir.
**     - *a işaret ettiği yere bölüm sonucunu atar.
**     - *b işaret ettiği yere kalan sonucunu atar.
**     - Eğer *b 0 ise, işlemi sonlandırır ve hiçbir şey yapmaz.
*/
