/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:05:08 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/20 23:25:26 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_ft(int *nbr)
{
	*nbr = 42; // nbr işaret ettiği değeri 42 olarak değiştirir
}

int
	main(void)
{
	int x = 13;
	printf("%d\n", x); // Önce x'in değerini yazdırır (13)
	ft_ft(&x); // ft_ft fonksiyonunu çağırarak x'in değerini 42 yapar
	printf("%d\n", x); // Sonra x'in yeni değerini yazdırır (42)
}

/*
** ft_ft:
**   Verilen bir işaretçi aracılığıyla işaret edilen tamsayıyı 42 olarak ayarlar.
**   - Parametre:
**     - int *nbr: Değiştirilecek tamsayının adresi.
**   - İşlev:
**     - nbr işaret ettiği değeri 42 olarak değiştirir.
*/
