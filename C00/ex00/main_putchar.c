/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:48:43 by hkeles            #+#    #+#             */
/*   Updated: 2023/03/26 13:27:17 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

int main(void)
{
	ft_putchar('a');
	ft_putchar(97);
}

//İkiside aynı çıktıyı verecektir.
//Çünkü write fonksiyonu ascii'ye göre çalışır.
//'a' karakterinin ascii tablosundaki desimal karşılığı 97'dir.
//Maini yazarken ikisinden birini örnek olarak kullanabilirsiniz.
