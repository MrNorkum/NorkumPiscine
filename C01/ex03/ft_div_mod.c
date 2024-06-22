/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:13:09 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 17:39:26 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_div_mod(int a, int b, int *div, int *mod)
{
	// Eğer b sıfırsa bölme işlemi tanımsız olur, bu yüzden işlemi sonlandırıyoruz
	if (b == 0)
		return ;
	// a'nın b'ye bölünmesiyle elde edilen bölümü div işaretçisinin gösterdiği yere yaz
	*div = a / b;
	// a'nın b'ye bölünmesiyle elde edilen kalanını mod işaretçisinin gösterdiği yere yaz
	*mod = a % b;
}

int
	main(void)
{
	int	div; // Bölüm sonucunu saklayacak tamsayı değişkeni
	int	mod; // Kalan sonucunu saklayacak tamsayı değişkeni
	
	// ft_div_mod fonksiyonunu çağırarak 10'u 3'e böl ve sonuçları div ve mod değişkenlerine ata
	ft_div_mod(13, 4, &div, &mod);
	
	// div ve mod değişkenlerinin değerlerini ekrana yazdır
	printf("%d%d SJ\n", div, mod);
}

/*
** ft_div_mod:
**   Verilen iki tamsayının bölme ve mod işlemlerini gerçekleştirir.
**   - Parametreler:
**     - int a: Bölünen tamsayı.
**     - int b: Bölen tamsayı.
**     - int *div: Bölme sonucunun saklanacağı işaretçi.
**     - int *mod: Mod sonucunun saklanacağı işaretçi.
**   - İşlev:
**     - a ve b değerlerini kullanarak a / b ve a % b işlemlerini gerçekleştirir.
**     - Sonuçları div ve mod işaretçilerine atar.
**     - Eğer b 0 ise, işlemi sonlandırır ve hiçbir şey yapmaz.
*/
