/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:04:09 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:23:09 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_putchar(char c)
{
	write(1, &c, 1); // Verilen karakteri standart çıkışa yazar
}

void
	ft_putout(int n, int *arr, int pos)
{
	int	i;

	if (pos == 1)
		write(1, ", ", 2); // Eğer pos 1 ise virgül ve boşluk yazdırır
	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + '0'); // Diziyi karakter olarak yazdırır
}

void
	ft_print_comb_increment(int n, int *arr)
{
	int	i;
	int	max;

	max = 9;
	i = n - 1;
	while (arr[i--] == max--)
		; // Dizinin sonundan başlayarak maksimum değerlere ulaşana kadar kontrol eder
	arr[i++] += 1; // Sonraki kombinasyon için diziyi artırır
	while (i++ < n)
		arr[i] = arr[i - 1] + 1; // Diğer elemanları sırasıyla günceller
}

void
	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = -1;
	while (++i < n)
		arr[i] = i; // Diziyi başlangıç değerlerine (0, 1, 2, ...) ayarlar
	ft_putout(n, arr, 0); // Başlangıç kombinasyonunu yazdırır
	while (arr[0] != 10 - n || arr[n - 1] != 9)
	{
		if (arr[n - 1] != 9)
			arr[n - 1] += 1; // Son basamağı artırır
		else
			ft_print_comb_increment(n, arr); // Son basamağı günceller
		ft_putout(n, arr, 1); // Yeni kombinasyonu yazdırır
	}
}

int
	main(void)
{
	ft_print_combn(3); // 3 basamaklı kombinasyonları yazdırır
}

/*
** Bu C programı, verilen bir tamsayı n için n basamaklı kombinasyonları
** yazdıran bir fonksiyon (ft_print_combn) ve bu fonksiyonu test eden main
** fonksiyonu içerir.
**
** Detaylar:
** - #include <unistd.h>: write sistem çağrısı için gerekli olan başlık dosyası.
**
** Fonksiyonlar:
**
** ft_putchar:
**   Verilen bir karakteri standart çıkışa yazdıran yardımcı bir fonksiyon.
**
** ft_putout:
**   Verilen diziyi n basamaklı bir sayı olarak standart çıkışa yazdıran fonksiyon.
**   - Parametreler:
**     - int n: Dizinin boyutu (basamak sayısı).
**     - int *arr: Yazdırılacak dizi.
**     - int pos: Yazdırma konumu (0 ise başlangıç, 1 ise devam).
**   - İşlev:
**     - Eğer pos 1 ise virgül ve boşluk ekler.
**     - Diziyi '0' karakterinden başlayarak yazdırır.
**
** ft_print_comb_increment:
**   Kombinasyonları artıran fonksiyon.
**   - Parametreler:
**     - int n: Dizinin boyutu (basamak sayısı).
**     - int *arr: Artırılacak dizi.
**   - İşlev:
**     - Dizi son elemanını artırır ve gerektiğinde diğer elemanları günceller.
**
** ft_print_combn:
**   Verilen n değeri için n basamaklı kombinasyonları yazdıran ana fonksiyon.
**   - Parametre:
**     - int n: Yazdırılacak kombinasyonun basamak sayısı.
**   - İşlev:
**     - İlk olarak diziyi başlangıç değerlerine (0, 1, 2, ...) ayarlar.
**     - Kombinasyonları üretir ve standart çıkışa yazdırır.
**
** main:
**   Programın giriş noktasıdır. ft_print_combn fonksiyonunu çağırarak 3 basamaklı
**   kombinasyonları yazdırır.
*/
