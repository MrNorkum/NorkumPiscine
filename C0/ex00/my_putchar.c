/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_putchar.c                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/10 20:37:50 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/10 20:37:52 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	my_putchar('a');
	my_putchar(97);
}

//İkiside aynı çıktıyı verecektir.
//Çünkü write fonksiyonu ascii'ye göre çalışır.
//'a' karakterinin ascii tablosundaki desimal karşılığı 97'dir.
//Maini yazarken ikisinden birini örnek olarak kullanabilirsiniz.

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
