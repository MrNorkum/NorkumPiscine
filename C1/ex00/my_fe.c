/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_fe.c                                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 03:05:08 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 03:05:14 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

void	my_fe(int *nbr)
{
	*nbr = 48;
}

#include <stdio.h>
int main(void)
{
	int x = 13;
	printf("%d\n", x);
	my_fe(&x);
	printf("%d\n", x);
}

//Burada bir integer x değişkeni oluşturduk.
//Oluşan x değişkeni ram'de rastgele bir adreste oluşuyor.
//Biz ise bu x değişkenine 13 verdik yani x'in ram'deki adresine 13 yazdık.
//Ardından my_fe fonksiyonuna *nbr işaretçisine &(ampersan) ile x değişkeninin adresini gönderdik.
//Böylece artık *nbr işaretçisi x değişkeninin ram'deki adresini işaret ediyor.
//my_fe fonksiyonunun içinde ise biz bu *nbr işaretçisinin işaret ettiği yere 48 yazıyoruz.
//Tabiki adres olarak x'in adresini gönderdiğimiz için *nbr işaretçisinin işaret ettiği yer x değişkeninin adresi oluyor.
//Ve ardından o adrese 48 yazıyoruz.
//O adreste 13 yazyordu ancak biz o adrese 48 yazdık.
//Böylece x değişkenini yazdırdığımız zaman artık bize 48 çıktısı veriyor.
//Çünkü adresinde artık 13 değil 48 yazıyor.

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
