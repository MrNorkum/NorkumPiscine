/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:36:57 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 04:25:22 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;

	x = 47;
	while (x++ < 57)
		write(1, &x, 1);
}

int main(void)
{
	ft_print_numbers();
}

//Bu defa rakamları yazdıracağız.
//burada gerçekleşen olay şudur.
//X while koşuluna 47 olarak girer ve 47 küçük müdür 57 sorusunu cevapladıktan sonra kendini bir arttırır.
//Böylece yazdırma kısmına 48 olarak gelir ve bu işlem böyle devam eder.
//En son ise 8 karakterini yani 56'yı yazdırdıktan sonra koşula tekrar girer ve kontrol eder.
//56 küçük müdür 57? ve ardından kendisini bir arttırır.
//Koşulun cevabı true olduğu için içeriye girer ve 57'yi yazdırır.
//Koşula tekrar girer ve soruyu sorar 57 küçük müdür 57? ve ardından kendini bir arttırır.
//Koşulun cevabı false olduğu için 58 yazdırılmaz ve işlem böylece son bulur.
