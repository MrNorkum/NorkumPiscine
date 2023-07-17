/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:38:57 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 04:24:02 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	x;

	x = 96;
	while (x++ < 122)
		write(1, &x, 1);
}

int main(void)
{
	ft_print_alphabet();
}

//Alfabeyi yazdıracağız lakin farkettiyseniz x'i 97 değil 96 olarak aldım.
//burada gerçekleşen olay şudur.
//X while koşuluna 96 olarak girer ve 96 küçük müdür 122 sorusunu cevapladıktan sonra kendini bir arttırır.
//Böylece yazdırma kısmına 97 olarak gelir ve bu işlem böyle devam eder.
//En son ise y karakterini yani 121'i yazdırdıktan sonra koşula tekrar girer ve kontrol eder.
//121 küçük müdür 122? ve ardından kendisini bir arttırır.
//Koşulun cevabı true olduğu için içeriye girer ve 122'yi yazdırır.
//Koşula tekrar girer ve soruyu sorar 122 küçük müdür 122? ve ardından kendini bir arttırır.
//Koşulun cevabı false olduğu için 123 yazdırılmaz ve işlem böylece son bulur.
