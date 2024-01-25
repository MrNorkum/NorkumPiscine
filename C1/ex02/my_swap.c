/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_swap.c                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/11 03:06:46 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/11 03:06:47 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

void	my_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	my_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int main(void)
{
	int x = 13;
	int y = 48;
	my_swap(&x, &y);
	printf("New X:%d\nNew Y:%d", x, y);
}

//Burada ise oluşturduğumuz iki değerin yerlerini değiştiriyoruz.
//Birazıcık matematik ile yapılan işlemi anlayabilirsiniz
//Kolay gelsin sözelciler.d

//İkiside aynı çalışır inceleyin kullanın.

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
