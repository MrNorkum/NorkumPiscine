/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:13:31 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/22 03:11:57 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdlib.h> /*
# define NULL
#   void *malloc(size_t);
#   void free(void *);
#        */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	ft_ultimate_range(int **range, int min, int max)
{
	int	idx;       // Dizi içindeki indeks
	int arr_len;   // Dizinin uzunluğu

	if (min >= max) // Eğer min, max'tan büyük veya eşitse
		return (*range = NULL, 0); // NULL döndür ve 0 döndür
	arr_len = max - min; // Dizinin uzunluğunu hesapla
	range[0] = malloc(sizeof(int) * arr_len); // Diziyi oluşturmak için hafıza tahsis et
	if (!range[0]) // Hafıza tahsisi başarısız olursa
		return (*range = NULL, -1); // NULL döndür ve -1 döndür

	idx = -1; // Başlangıç indeksi olarak -1 ayarla
	while (++idx < arr_len) // Diziye değerleri ata
		range[0][idx] = min + idx; // Dizinin her indeksine min'den başlayarak değer ata
	return (arr_len); // Dizinin uzunluğunu döndür
}

int
	main(void)
{
	int	*arr;    // Oluşturulacak dizi için işaretçi
	int	size;    // Oluşturulan dizinin boyutu

	size = ft_ultimate_range(&arr, 0, 10); // ft_ultimate_range fonksiyonu ile 0'dan 10'a kadar olan tamsayıları içeren bir dizi oluştur
	if (!arr) // Eğer dizi NULL ise
		return (1); // Hata durumunu belirtmek için 1 döndür
	
	for (int i = 0; i < size; i++) // Diziyi ekrana yazdır
		printf("[ %d ]", arr[i]); // Dizinin her elemanını yazdır
	printf("\n"); // Yeni satır karakteri yazdır
	
	free(arr); // Kullanılan hafızayı serbest bırak
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_ultimate_range fonksiyonunu kullanarak verilen aralıkta tamsayıları içeren bir dizi oluşturur, ekrana yazdırır ve kullanılan hafızayı serbest bırakır.
**
** 1. ft_ultimate_range fonksiyonu:
**    - Parametreler:
**      - int **range: Oluşturulacak dizinin adresi.
**      - int min: Dizi için başlangıç değeri.
**      - int max: Dizi için bitiş değeri.
**    - İşlev:
**      - min ve max arasındaki tüm tamsayıları içeren bir dizi oluşturur.
**      - Dizi oluşturulamazsa NULL döner ve -1 döndürür.
**      - min >= max ise NULL döner ve 0 döndürür.
**      - Başarılıysa oluşturulan dizinin boyutunu döner.
**
** 2. main fonksiyonu:
**    - İşlev:
**      - ft_ultimate_range fonksiyonunu kullanarak 0'dan 10'a kadar olan tamsayıları içeren bir dizi oluşturur.
**      - Oluşturulan diziyi ekrana yazdırır.
**      - Kullanılan hafızayı serbest bırakır.
**
** 3. malloc fonksiyonu:
**    - Parametre:
**      - sizeof(int) * arr_len: Tahsis edilecek hafıza boyutu.
**    - İşlev:
**      - Verilen boyutta hafıza tahsis eder ve başlangıç adresini döndürür.
**
** 4. free fonksiyonu:
**    - Parametre:
**      - arr: Serbest bırakılacak hafıza alanının adresi.
**    - İşlev:
**      - Tahsis edilen hafızayı serbest bırakır.
**
** 5. printf fonksiyonu:
**    - Parametre:
**      - [ %d ] formatıyla sayı dizisini yazdırır.
**      - arr[i]: Yazdırılacak sayı.
**    - İşlev:
**      - Verilen sayıyı formatlı olarak ekrana yazdırır.
**
** 6. return 0:
**    - İşlev:
**      - Programın başarıyla tamamlandığını belirtir.
*/
