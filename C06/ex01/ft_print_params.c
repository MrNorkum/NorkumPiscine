/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:10:07 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/22 01:36:48 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int main(int argc, char *argv[])
{
	// argv dizisinin her bir elemanı (*argv) üzerinde döngü başlatılır
	while (*++argv)
	{
		// Her bir *argv işaretçisi gösterdiği karakter dizisi üzerinde döngü başlatılır
		while (*argv[0] && write(1, argv[0]++, 1))
			;
		write(1, "\n", 1); // Karakter dizisi yazdırıldıktan sonra "\n" karakteri ile bir satır atlatılır
	}
	return (!argc); // argc'nin değeri 0 değil ise 0 döndürür (başarılı tamamlama)
}

/*
** Açıklamalar:
**   Bu dosya, main fonksiyonu ile komut satırından gelen argüman dizilerini ekrana yazdırır.
**
** 1. main fonksiyonu:
**    - Parametreler:
**      - int argc: Komut satırından gelen argüman sayısı.
**      - char *argv[]: Komut satırından gelen argüman dizisi.
**    - İşlev:
**      - argv dizisinin her bir elemanı (*argv) üzerinde döngü başlatılır (++argv).
**      - Her bir *argv işaretçisi gösterdiği karakter dizisi üzerinde döngü başlatılır (while (*argv[0])).
**      - write fonksiyonu kullanılarak *argv[0] işaretçisi gösterdiği her bir karakter ekrana yazdırılır.
**      - *argv[0] işaretçisi bir sonraki karaktere ilerletilir (argv[0]++).
**      - Karakter dizisi yazdırıldıktan sonra "\n" karakteri ile bir satır atlatılır (write(1, "\n", 1)).
**      - İç döngü tamamlandıktan sonra dış döngüde bir sonraki *argv elemanı işlenir.
**      - argc'nin değeri 0 değil ise, yani argüman verilmişse, return (!argc); ifadesi ile 0 döndürülür (başarılı tamamlama).
**
** 2. write fonksiyonu:
**    - Parametreler:
**      - 1: Standart çıkış.
**      - argv[0]: Ekrana yazdırılacak karakter dizisi.
**      - 1: Yazdırılacak karakter dizisinin uzunluğu (1 karakter).
**    - İşlev:
**      - Verilen karakter dizisini ekrana yazar.
**
** 3. return (!argc);
**    - İşlev:
**      - argc'nin değeri 0 değil ise 0 döndürür (başarılı tamamlama).
*/
