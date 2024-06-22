/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:10:00 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/22 01:30:17 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int
	main(int argc, char *argv[])
{
	// argv[0] işaretçisinin gösterdiği karakter dizisi üzerinde döngü başlatılır
	while (*argv[0] && write(1, argv[0]++, 1))
		;
	return (!argc); // argc'nin değeri 0 değil ise 0 döndürür (başarılı tamamlama)
}

/*
** main:
**   Parametreler:
**     - int argc: Komut satırından gelen argüman sayısı.
**     - char *argv[]: Komut satırından gelen argüman dizisi.
**   İşlev:
**     - argv[0] karakter dizisini ekrana yazdırır.
**     - Her bir karakter yazdırıldıktan sonra argv[0] işaretçisi bir sonraki karaktere ilerletilir.
**     - argc'nin değeri 0 değil ise program başarılı bir şekilde tamamlanmış demektir, bu durumda 0 döndürülür.
**
** Açıklamalar:
**   Bu dosya, main fonksiyonu ile komut satırından gelen ilk argümanın karakter dizisini ekrana yazdırır.
**
** 1. main fonksiyonu:
**    - Parametreler:
**      - int argc: Komut satırından gelen argüman sayısı.
**      - char *argv[]: Komut satırından gelen argüman dizisi.
**    - İşlev:
**      - argv[0] karakter dizisi üzerinde döngü başlatılır.
**      - *argv[0] ifadesi ile argv[0] işaretçisinin gösterdiği karakter dizisinin başlangıç adresi alınır.
**      - write fonksiyonu kullanılarak argv[0] işaretçisi gösterdiği her bir karakter ekrana yazdırılır.
**      - argv[0] işaretçisi bir sonraki karaktere ilerletilir (++argv[0]).
**      - argc'nin değeri 0 ise, yani hiç argüman verilmemişse, return (!argc); ifadesi ile 0 döndürülür (başarılı tamamlama).
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
