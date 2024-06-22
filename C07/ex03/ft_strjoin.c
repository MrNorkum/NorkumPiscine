/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:13:41 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/22 03:13:44 by hkeles           ###   ########.fr       */
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

char
	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dup; // Oluşturulacak yeni dizinin işaretçisi
	int		ac;   // strs dizisi üzerinde döngü için sayaç
	int		i;    // Her bir dizi üzerinde döngü için sayaç
	int		j;    // Oluşturulan yeni dizi üzerinde ilerlemek için sayaç

	j = 0;
	ac = -1;
	dup = malloc(size * 100 + (size - 1) * 100); // Varsayılan olarak yeterli bellek tahsisi yapıldı
	if (!dup)
		return (NULL); // Bellek tahsisi başarısız olursa NULL döndür

	while (++ac < size) // strs dizisi üzerinde ilerle
	{
		i = 0;
		while (strs[ac][i]) // Mevcut dizinin sonuna kadar ilerle
			dup[j++] = strs[ac][i++]; // Mevcut dizinin karakterlerini yeni diziye kopyala
		i = 0;
		while (sep[i] && ac != size - 1) // Ayraç dizisini yeni diziye ekle, son diziden sonra ayraç eklenmez
			dup[j++] = sep[i++];
	}
	return (dup[j] = '\0', dup); // Yeni dizinin sonuna '\0' karakteri ekle ve döndür
}

int
	main(void)
{
	char	**strs;    // Birleştirilecek dizilerin işaretçilerini içeren dizi
	char	sep[] = " "; // Diziler arasına eklenecek ayraç dizisi
	char	*res;      // Sonuç dizesi

	strs = malloc(sizeof(char *) * 2); // strs dizisi için bellek tahsis et
	if (!strs)
		return (1); // Bellek tahsisi başarısız olursa 1 döndür
	strs[0] = "Mr.sdfssadfsdfkldsffggfghgghhg"; // İlk diziyi ata
	strs[1] = "Norkum"; // İkinci diziyi ata
	res = ft_strjoin(2, strs, sep); // ft_strjoin fonksiyonunu kullanarak dizileri birleştir
	free(strs); // strs dizisini serbest bırak
	if (!res)
		return (1); // Bellek tahsisi başarısız olursa 1 döndür
	printf("%s\n", res); // Birleştirilmiş diziyi ekrana yazdır
	free(res); // Oluşturulan diziyi serbest bırak
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**
** Bu dosya, ft_strjoin fonksiyonunu kullanarak verilen dizileri ve ayracı birleştirir, sonucu ekrana yazdırır ve kullanılan hafızayı serbest bırakır.
**
** 1. ft_strjoin fonksiyonu:
**    - Parametreler:
**      - int size: Birleştirilecek dizi sayısı.
**      - char **strs: Birleştirilecek dizilerin adreslerini içeren dizi.
**      - char *sep: Diziler arasına eklenecek ayraç dizisi.
**    - İşlev:
**      - Verilen dizileri ve ayracı birleştirerek yeni bir dizi oluşturur.
**      - Yeni oluşturulan diziye sonlandırıcı '\0' karakteri ekler.
**      - Oluşturulan diziyi döndürür.
**
** 2. main fonksiyonu:
**    - İşlev:
**      - ft_strjoin fonksiyonunu kullanarak dizileri birleştirir.
**      - Sonucu ekrana yazdırır.
**      - Kullanılan hafızayı serbest bırakır.
**
** 3. malloc fonksiyonu:
**    - Parametre:
**      - (size * 100 + (size - 1) * 100): Tahsis edilecek hafıza boyutu.
**    - İşlev:
**      - Verilen boyutta hafıza tahsis eder ve başlangıç adresini döndürür.
**
** 4. free fonksiyonu:
**    - Parametre:
**      - strs veya res: Serbest bırakılacak hafıza alanının adresi.
**    - İşlev:
**      - Tahsis edilen hafızayı serbest bırakır.
**
** 5. printf fonksiyonu:
**    - Parametre:
**      - "%s\n": Yazdırılacak dizenin formatı.
**      - res: Yazdırılacak dize.
**    - İşlev:
**      - Verilen dizeyi ekrana yazdırır.
**
** 6. return 0:
**    - İşlev:
**      - Programın başarıyla tamamlandığını belirtir.
*/
