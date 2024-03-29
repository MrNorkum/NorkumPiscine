/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_div_mod.c                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 15:13:09 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 15:13:11 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

void	my_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main(void)
{
	int div, mod;
	my_div_mod(10, 3, &div, &mod);
	printf("%d%d SJ", div, mod);
}

//Burada ise int div ve mod değerleri oluşturduk.
//ardından fonksiyona 10 ve 3 değerlerini ve değer vermediğimiz div ve mod değişkenlerinin boş adreslerini gönderdik.
//Fonksiyonda ise bölme işleminin sonucunu oluşturduğumuz div değişkeninin adresine yazdık.
//Modunu aldığımızda ise cevabı mod değişkeninin adresine yazdık.
//Böylece işlem son buldu.

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
