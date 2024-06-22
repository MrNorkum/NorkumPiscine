/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:16:46 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 18:21:33 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_swap(int *a, int *b)
{
	*a = *a + *b; // a ve b'nin toplamını a'ya atar
	*b = *a - *b; // (a + b) - b = a olur, b'yi a'nın ilk değerine atar
	*a = *a - *b; // (a + b) - a = b olur, a'yı b'nin ilk değerine atar
	return (1); // Değişim olduğunda 1 döndür
}

void
	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	is_swap;

	is_swap = 1; // En az bir değişim yapılmasını sağlamak için başlangıçta 1 olarak ayarla
	while (is_swap)
	{
		i = -1;
		is_swap = 0; // Döngü başında değişim yapılmadığını varsay
		while (++i < size - 1)
		{
			if (tab[i] > tab[i + 1]) // Eğer mevcut eleman bir sonraki elemandan büyükse
				is_swap = ft_swap(&tab[i], &tab[i + 1]); // Elemanları değiştir ve is_swap'i 1 yap
		}
	}
}

int
	main(void)
{
	int arr[7] = {2, 4, 1, 5, 6, 7, 3}; // Örnek bir tamsayı dizisi
	
	for (int i = 0; i < 7; i++)
		printf("[ %d ]", arr[i]); // Dizinin ilk halini yazdırır
	printf("\n");

	ft_sort_int_tab(arr, 7); // Diziyi küçükten büyüğe doğru sıralar

	for (int i = 0; i < 7; i++)
		printf("[ %d ]", arr[i]); // Sıralanmış diziyi yazdırır
	printf("\n");

	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
** 
** Bu dosya, bir tamsayı dizisini küçükten büyüğe sıralamak için kullanılan iki fonksiyonu içerir.
**
** 1. ft_swap:
**    - Verilen iki tamsayı işaretçisinin gösterdiği değerleri yer değiştirir.
**    - Parametreler:
**      - int *a: Birinci tamsayı işaretçisi.
**      - int *b: İkinci tamsayı işaretçisi.
**    - İşlev:
**      - Değerleri geçici bir değişken kullanmadan yer değiştirir.
**      - Toplama ve çıkarma işlemleri kullanılarak değerler yer değiştirilir.
**    - Dönüş Değeri:
**      - 1: Değerler yer değiştirilmişse.
**    - Açıklamalar:
**      - *a = *a + *b; -> a ve b'nin toplamını a'ya atar.
**      - *b = *a - *b; -> (a + b) - b = a olur, b'yi a'nın ilk değerine atar.
**      - *a = *a - *b; -> (a + b) - a = b olur, a'yı b'nin ilk değerine atar.
**
** 2. ft_sort_int_tab:
**    - Verilen bir tamsayı dizisini küçükten büyüğe doğru sıralar.
**    - Parametreler:
**      - int *tab: Sıralanacak tamsayı dizisinin başlangıç adresi.
**      - int size: Dizinin boyutu.
**    - İşlev:
**      - Bubble sort algoritmasını kullanarak diziyi sıralar.
**      - ft_swap fonksiyonunu kullanarak değerleri yer değiştirir.
**    - Açıklamalar:
**      - int is_swap = 1; -> En az bir değişim yapılmasını sağlamak için başlangıçta 1 olarak ayarlanır.
**      - while (is_swap) -> is_swap 1 olduğu sürece döngü devam eder.
**      - i = -1; -> Döngü içindeki indeks başlangıçta -1 olarak ayarlanır.
**      - is_swap = 0; -> Döngü başında değişim yapılmadığını varsayar.
**      - if (tab[i] > tab[i + 1]) -> Eğer mevcut eleman bir sonraki elemandan büyükse.
**      - is_swap = ft_swap(&tab[i], &tab[i + 1]); -> Elemanları değiştir ve is_swap'i 1 yap.
**
** 3. main:
**    - Programın başlangıç noktasıdır. Örnek bir tamsayı dizisini küçükten büyüğe sıralar ve sonucu yazdırır.
**    - Açıklamalar:
**      - int arr[7] = {2, 4, 1, 5, 6, 7, 3}; -> Örnek bir tamsayı dizisi.
**      - for (int i = 0; i < 7; i++) printf("[ %d ]", arr[i]); -> Dizinin ilk halini yazdırır.
**      - ft_sort_int_tab(arr, 7); -> Diziyi küçükten büyüğe doğru sıralar.
**      - for (int i = 0; i < 7; i++) printf("[ %d ]", arr[i]); -> Sıralanmış diziyi yazdırır.
**      - return (0); -> Programın başarıyla tamamlandığını belirtir ve 0 değeriyle programın normal şekilde sonlandığını gösterir.
*/