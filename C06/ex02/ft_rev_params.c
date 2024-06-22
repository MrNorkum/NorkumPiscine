/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:10:14 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/22 01:41:55 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int main(int argc, char *argv[])
{
	// argc değeri 0 olana kadar (tüm argümanlar işlenene kadar) döngü devam eder
	while (--argc)
	{
		// argv[argc] işaretçisinin gösterdiği karakter dizisi yazdırılır
		while (*argv[argc] && write(1, argv[argc]++, 1))
			;
		write(1, "\n", 1); // Karakter dizisi yazdırıldıktan sonra "\n" karakteri ile bir satır atlatılır
	}
	return (0); // Programın başarıyla tamamlandığını belirtir
}

/*
** Açıklamalar:
**   Bu dosya, main fonksiyonu ile komut satırından gelen argüman dizilerini sondan başa doğru ekrana yazdırır.
**
** 1. main fonksiyonu:
**    - Parametreler:
**      - int argc: Komut satırından gelen argüman sayısı.
**      - char *argv[]: Komut satırından gelen argüman dizisi.
**    - İşlev:
**      - argc değeri 0 olana kadar (tüm argümanlar işlenene kadar) döngü devam eder (--argc).
**      - Her döngü adımında argv[argc] işaretçisinin gösterdiği karakter dizisi yazdırılır.
**      - argv[argc] işaretçisi bir sonraki karaktere ilerletilir (argv[argc]++).
**      - Karakter dizisi yazdırıldıktan sonra "\n" karakteri ile bir satır atlatılır (write(1, "\n", 1)).
**      - Döngü tamamlandıktan sonra 0 döndürülerek program başarılı bir şekilde tamamlanmıştır.
**
** 2. write fonksiyonu:
**    - Parametreler:
**      - 1: Standart çıkış.
**      - argv[argc]: Ekrana yazdırılacak karakter dizisi.
**      - 1: Yazdırılacak karakter dizisinin uzunluğu (1 karakter).
**    - İşlev:
**      - Verilen karakter dizisini ekrana yazar.
**
** 3. return 0;
**    - İşlev:
**      - Programın başarıyla tamamlandığını belirtir.
*/
