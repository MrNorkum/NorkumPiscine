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
	int	x;

	x = 96;
	while (++x <= 122)
		write(1, &x, 1);
}

int main(void)
{
	ft_print_alphabet();
}

//Alfabeyi yazdıracağız lakin farkettiyseniz x'i 97 değil 96 olarak aldım.
//burada gerçekleşen olay şudur.
//X while koşuluna girmeden önce artıyor ve 97 oluyorve sonra 97 küçük eşit midir 122 sorusunu cevaplıyor.
//Cevap true ise içeri giriyor ve 97'nin ascii karşılığını ekrana yazdırıyor.
//İşlem böyle devam eder.
//En son ise y karakterini yani 121'i yazdırdıktan sonra koşula tekrar girer.
//Kendini arttırdıktan sonra kontrol eder 122 küçük eşit midir 122?
//Koşulun cevabı true olduğu için içeriye girer ve 122'yi yazdırır.
//Koşula tekrar girer kendini bir arttırır ve soruyu sorar 123 küçük eşit midir 122?
//Koşulun cevabı false olduğu için 123 yazdırılmaz ve işlem böylece son bulur.
