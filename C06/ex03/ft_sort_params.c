/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:10:21 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/22 02:01:09 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
static void	ft_sort_str_arr(char **arr, int size);
static int	ft_strcmp(char *s1, char *s2);
static int	ft_swap(char **a, char **b);
static void	ft_putendl(char *str);
/* *************************** [^] PROTOTYPES [^] *************************** */

int
	main(int argc, char *argv[])
{
	ft_sort_str_arr(argv, argc); // Argümanları sıralar
	while (*++argv) // Argümanların başından sonuna kadar ilerle
		ft_putendl(*argv); // Argümanı ekrana yaz ve yeni satıra geç
	return (0); // Programın başarıyla tamamlandığını belirtir
}

static void
	ft_sort_str_arr(char **arr, int size)
{
	int idx;
	int is_swap;
	
	is_swap = 1; // Değişim kontrolü için değişken
	while (is_swap) // Değişim olduğu sürece devam et
	{
		is_swap = 0; // Başlangıçta değişim yok olarak ayarla
		idx = 0; // Dizinin başlangıç indeksini ayarla
		while (++idx < size - 1) // Dizinin sonuna kadar ilerle
			if (ft_strcmp(arr[idx], arr[idx + 1]) > 0) // İki elemanı karşılaştır
				is_swap = ft_swap(&arr[idx], &arr[idx + 1]); // Yer değiştir ve değişim yapıldığını belirt
	}
}

static int
	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0; // Karşılaştırma için indeks
	while (s1[i] && s2[i] && s1[i] == s2[i]) // Karakterler eşit olduğu sürece ilerle
		i++; // İndeksi artır
	return (s1[i] - s2[i]); // İlk farklı karakterin ASCII değeri farkını döndür
}

static int
	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a; // Geçici değişkene a'yı ata
	*a = *b; // a'yı b'ye ata
	*b = temp; // b'yi geçici değişkene ata
	return (1); // Değişim yapıldığını belirtmek için 1 döndür
}

static void
	ft_putendl(char *str)
{
	int length;

	length = 0; // Dizinin uzunluğunu tutmak için değişken
	while (str[length]) // Dizinin sonuna kadar ilerle
		++length; // Uzunluğu artır
	write(1, str, length); // Diziyi ekrana yaz
	write(1, "\n", 1); // Yeni satıra geç
}

/*
** Açıklamalar:
**
** Bu dosya, ft_sort_str_arr fonksiyonunu kullanarak komut satırından gelen argümanları alfabetik olarak sıralar ve ekrana yazdırır.
**
** 1. ft_putendl fonksiyonu:
**    - Parametre:
**      - char *str: Yazdırılacak karakter dizisi.
**    - İşlev:
**      - Verilen karakter dizisini ekrana yazar ve bir satır atlatır.
**
** 2. ft_strcmp fonksiyonu:
**    - Parametreler:
**      - char *s1: Karşılaştırılacak ilk karakter dizisi.
**      - char *s2: Karşılaştırılacak ikinci karakter dizisi.
**    - İşlev:
**      - İki karakter dizisini karşılaştırır.
**      - İlk farklı karakterin ASCII değeri farkını döndürür.
**
** 3. ft_swap fonksiyonu:
**    - Parametreler:
**      - char **a: Değiştirilecek ilk karakter dizisinin adresi.
**      - char **b: Değiştirilecek ikinci karakter dizisinin adresi.
**    - İşlev:
**      - İki karakter dizisinin yerini değiştirir.
**
** 4. ft_sort_str_arr fonksiyonu:
**    - Parametreler:
**      - char **arr: Sıralanacak karakter dizisi dizisi.
**      - int size: Dizinin boyutu.
**    - İşlev:
**      - Karakter dizisi dizisini alfabetik olarak sıralar.
**
** 5. main fonksiyonu:
**    - Parametreler:
**      - int argc: Komut satırından gelen argüman sayısı.
**      - char *argv[]: Komut satırından gelen argüman dizisi.
**    - İşlev:
**      - Komut satırından gelen argümanları alfabetik olarak sıralar ve ekrana yazdırır.
**
** 6. write fonksiyonu:
**    - Parametreler:
**      - 1: Standart çıkış.
**      - str: Yazdırılacak karakter dizisi.
**      - length: Yazdırılacak karakter dizisinin uzunluğu.
**    - İşlev:
**      - Verilen karakter dizisini ekrana yazar.
**      - Yeni satıra geçmek için '\n' karakteri ekrana yazar.
**
** 7. return 0;
**    - İşlev:
**      - Programın başarıyla tamamlandığını belirtir.
*/
