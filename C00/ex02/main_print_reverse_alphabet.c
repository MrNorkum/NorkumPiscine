/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:57:05 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 04:23:06 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	x;

	x = 123;
	while (x-- > 97)
		write(1, &x, 1);
}

int main(void)
{
	ft_print_reverse_alphabet();
}

//Bu defa alfabeyi tersten yazdıracağız.
//burada gerçekleşen olay şudur.
//X while koşuluna 123 olarak girer ve 123 büyük müdür 97 sorusunu cevapladıktan sonra kendini bir eksiltir.
//Böylece yazdırma kısmına 122 olarak gelir ve bu işlem böyle devam eder.
//En son ise b karakterini yani 98'i yazdırdıktan sonra koşula tekrar girer ve kontrol eder.
//98 büyük müdür 97? ve ardından kendisini bir eksiltir.
//Koşulun cevabı true olduğu için içeriye girer ve 97'yi yazdırır.
//Koşula tekrar girer ve soruyu sorar 97 büyük müdür 97? ve ardından kendini bir eksiltiır.
//Koşulun cevabı false olduğu için 96 yazdırılmaz ve işlem böylece son bulur.