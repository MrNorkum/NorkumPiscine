/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:40:53 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/20 23:07:30 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_print_comb(void)
{
	char arr[3]; // Üçlü kombinasyonu tutacak dizi

	arr[0] = '0'; // İlk rakam '0'
	arr[1] = '1'; // İkinci rakam '1'
	arr[2] = '2'; // Üçüncü rakam '2'
	while (arr[0] <= '7') // Birinci rakam '0' ile '7' arasında olduğu sürece devam et
	{
		write(1, arr, 3); // Şu anki kombinasyonu yazdır
		write(1, ", ", (arr[0] != '7') * 2); // Virgül ve boşluk ekler (son kombinasyon hariç)

		arr[2] += 1; // Üçüncü rakamı bir artır

		if (arr[2] > '9') // Üçüncü rakam '9'u geçerse
			arr[2] = ++arr[1] + 1; // İkinci rakamı bir artır ve üçüncüyü yeniden başlat

		if (arr[1] > '8') // İkinci rakam '8'i geçerse
		{
			arr[1] = ++arr[0] + 1; // Birinci rakamı bir artır ve ikinciyi yeniden başlat
			arr[2] = arr[1] + 1; // Üçüncüyü de yeniden başlat
		}
	}
}

int
	main(void)
{
	ft_print_comb(); // ft_print_comb fonksiyonunu çağırır
}

/*
** Bu C programı, 0'dan 9'a kadar olan rakamlardan oluşan üçlü kombinasyonları 
** yazdıran bir fonksiyon (ft_print_comb) içerir. Fonksiyon, üç rakamı bir diziye 
** yerleştirir, ardından bu kombinasyonları oluşturup virgül ve boşluk ile 
** ayrılarak standart çıkışa yazar.
**
** Detaylar:
** - #include <unistd.h>: write sistem çağrısı için gerekli olan başlık dosyası.
** - ft_print_comb(void): 0'dan 9'a kadar olan rakamlardan oluşan üçlü kombinasyonları 
**   üretip standart çıkışa yazdırır.
** - main(void): Programın giriş noktası, ft_print_comb fonksiyonunu çağırır.
*/
