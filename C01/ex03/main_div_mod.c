/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 21:49:10 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 05:12:46 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

#include <stdio.h>
int main(void)
{
	int div, mod;
	ft_div_mod(10, 3, &div, &mod);
	printf("%d%d SJ", div, mod);
}

//Burada ise int div ve mod değerleri oluşturduk.
//ardından fonksiyona 10 ve 3 değerlerini ve değer vermediğimiz div ve mod değişkenlerinin boş adreslerini gönderdik.
//Fonksiyonda ise bölme işleminin sonucunu oluşturduğumuz div değişkeninin adresine yazdık.
//Modunu aldığımızda ise cevabı mod değişkeninin adresine yazdık.
//Böylece işlem son buldu. 
