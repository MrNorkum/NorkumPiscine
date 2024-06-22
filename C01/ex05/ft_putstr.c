/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:15:21 by hkeles            #+#    #+#             */
/*   Updated: 2024/06/21 20:23:42 by hkeles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int, const void *, size_t);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void
	ft_putstr(char *str)
{
	while (*str) // str'nin işaret ettiği karakter null karakter ('\0') olmadığı sürece döngü devam eder
		write(1, str++, 1); // str'nin işaret ettiği karakteri yazdırır ve işaretçiyi bir sonraki karaktere ilerletir
}

void
	ft_putstr(char *str)
{
	while (*str && write(1, str++, 1) != -1)
		; // Her bir karakteri yazdırır ve işaretçiyi bir sonraki karaktere ilerletir. write çağrısı başarısız olursa (-1) döngü sona erer.
}

int
	main(void)
{
	ft_putstr("Mr. Norkum Was Here Xd"); // ft_putstr fonksiyonunu çağırarak karakter dizisini yazdırır
}

/*
** ft_putstr:
**   Verilen bir karakter dizisini (string) standart çıktıya (genellikle ekrana) yazar.
**   - Parametre:
**     - char *str: Yazdırılacak karakter dizisinin başlangıç adresi.
**   - İşlev:
**     - Karakter dizisinin sonuna kadar her bir karakteri tek tek yazdırır.
**     - write sistem çağrısını kullanarak her bir karakteri çıktıya yazar.
*/

/*
** Açıklamalar:
** - `ft_putstr` fonksiyonu, bir karakter dizisini standart çıktıya yazdırmak için kullanılır.
** - `write` sistem çağrısı, verilen dosya tanımlayıcısına (bu durumda 1, yani standart çıktı) 
**   belirli bir boyutta veri yazar.
** - İlk `ft_putstr` versiyonu, `write` sistem çağrısını her seferinde çağırarak dizideki her bir karakteri yazar.
** - İkinci `ft_putstr` versiyonu, aynı işlevi yerine getirir ancak `write` çağrısının sonucunu kontrol eder.
** - Her iki versiyon da dizinin sonundaki null karakterine ('\0') ulaşana kadar çalışır.
** - `main` fonksiyonu, `ft_putstr` fonksiyonunu çağırarak belirtilen karakter dizisini yazdırır.
*/