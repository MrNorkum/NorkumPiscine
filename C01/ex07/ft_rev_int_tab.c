/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:16:14 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 18:10:59 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_swap(int *a, int *b)
{
	*a = *a + *b; // a ve b'nin toplamını a'ya atar
	*b = *a - *b; // (a + b) - b = a olur, b'yi a'nın ilk değerine atar
	*a = *a - *b; // (a + b) - a = b olur, a'yı b'nin ilk değerine atar
}


void
	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = -1; // Dizinin başından başlayacak indeks
	while (++i < size / 2) // Ortada buluşana kadar devam eder
		ft_swap(&tab[i], &tab[size - 1 - i]); // i ve size - 1 - i indekslerindeki değerleri yer değiştirir
}

int
	main(void)
{
	int arr_len = 7; // Array uzunluğu
	int arr[7] = {2, 4, 1, 5, 6, 7, 3}; // Örnek bir tamsayı dizisi

	for (int i = 0; i < arr_len; i++)
		printf("[ %d ]", arr[i]); // Dizinin ilk halini yazdırır
	printf("\n");

	ft_rev_int_tab(arr, arr_len); // Diziyi tersine çevirir

	for (int i = 0; i < arr_len; i++)
		printf("[ %d ]", arr[i]); // Tersine çevrilmiş diziyi yazdırır
	printf("\n");

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
** 
** Bu dosya, bir tamsayı dizisini tersine çevirmek için kullanılan iki fonksiyonu içerir.
**
** 1. ft_swap:
**    - Verilen iki tamsayı işaretçisinin gösterdiği değerleri yer değiştirir.
**    - Parametreler:
**      - int *a: Birinci tamsayı işaretçisi.
**      - int *b: İkinci tamsayı işaretçisi.
**    - İşlev:
**      - Değerleri geçici bir değişken kullanmadan yer değiştirir.
**      - Toplama ve çıkarma işlemleri kullanılarak değerler yer değiştirilir.
**    - Açıklamalar:
**      - *a = *a + *b; -> a ve b'nin toplamını a'ya atar.
**      - *b = *a - *b; -> (a + b) - b = a olur, b'yi a'nın ilk değerine atar.
**      - *a = *a - *b; -> (a + b) - a = b olur, a'yı b'nin ilk değerine atar.
**
** 2. ft_rev_int_tab:
**    - Verilen bir tamsayı dizisini tersine çevirir.
**    - Parametreler:
**      - int *tab: Tersine çevrilecek tamsayı dizisinin başlangıç adresi.
**      - int size: Dizinin boyutu.
**    - İşlev:
**      - Dizinin başından ve sonundan başlayarak ortada buluşana kadar değerleri yer değiştirir.
**      - ft_swap fonksiyonunu kullanarak değerleri yer değiştirir.
**    - Açıklamalar:
**      - int i = -1; -> Dizinin başından başlayacak indeks.
**      - while (++i < size / 2) -> Ortada buluşana kadar devam eder.
**      - ft_swap(&tab[i], &tab[size - 1 - i]); -> i ve size - 1 - i indekslerindeki değerleri yer değiştirir.
**
** 3. main:
**    - Programın başlangıç noktasıdır. Örnek bir tamsayı dizisini tersine çevirir ve sonucu yazdırır.
**    - Açıklamalar:
**      - int arr_len = 7; -> Dizinin boyutunu belirler.
**      - int arr[7] = {2, 4, 1, 5, 6, 7, 3}; -> Örnek bir tamsayı dizisi.
**      - for (int i = 0; i < arr_len; i++) printf("[ %d ]", arr[i]); -> Dizinin ilk halini yazdırır.
**      - ft_rev_int_tab(arr, arr_len); -> Diziyi tersine çevirir.
**      - for (int i = 0; i < arr_len; i++) printf("[ %d ]", arr[i]); -> Tersine çevrilmiş diziyi yazdırır.
**      - return (0); -> Programın başarıyla tamamlandığını belirtir ve 0 değeriyle programın normal şekilde sonlandığını gösterir.
*/

