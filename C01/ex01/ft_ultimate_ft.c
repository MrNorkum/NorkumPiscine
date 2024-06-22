/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:06:11 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 17:26:15 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42; // nbr işaret ettiği bellek adresindeki değeri 42 olarak değiştirir
}

int
	main(void)
{
	int x = 13; // int türünde x adında bir değişken tanımla ve 13 değeriyle başlat
	printf("%d\n", x); // Önce x'in değerini yazdırır (13)
	
	// İşaretçi seviyeleri oluşturuluyor
	int *p1 = &x;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	
	ft_ultimate_ft(&p8); // ft_ultimate_ft fonksiyonunu çağırarak p8'in bellek adresini geçir
	                      // Bu sayede p8'in işaret ettiği değeri 42 yapar, yani x'in değerini de 42 yapar
	printf("Sonraki x'in değeri: %d", x); // x'in yeni değerini yazdırır (Sonraki x'in değeri: 42)
}

/*
** ft_ultimate_ft:
**   Verilen bir işaretçi aracılığıyla işaret edilen tamsayıyı 42 olarak ayarlar.
**   - Parametre:
**     - int *********nbr: Değiştirilecek tamsayının adresi.
**   - İşlev:
**     - nbr işaret ettiği değeri 42 olarak değiştirir.
*/
