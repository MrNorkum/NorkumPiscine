/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 21:21:38 by hkeles            #+#    #+#             */
/*   Updated: 2023/04/02 09:49:49 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>
int main(void)
{
	int x = 13;
	int *p1 = &x;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	ft_ultimate_ft(p9);
	printf("%d", x);
}

//Burada ise yaptığımız işlem çok basit.
//Yine bir x değişkeni oluşturuyoruz.
//Ve tabiki ram'de rastgele bir adreste oluşuyor.
//Ardından x değişkenine 13 değerini veriyoruz ve böylece artık adresinde 13 yazıyor.
//Burada x değişkeninin adresini p1 işaretçisine gönderiyoruz.
//Ardından p1 işaretçisinin işaret ettiği yeri de p2 işaretçisine gönderiyoruz.
//p2'nin işaret ettiği yeri p3, p3'ün işaret ettiği yeri p4'e derken en son p8'in işaret ettiği yeri de p9'a gönderiyoruz.
//Böylece bütğn işaretçiler x değişkeninin adresini işaret ediyor.
//Biz ise p9'un işaret ettiği yeri ft_ultimate_ft fonksiyonuna gönderiyoruz ve nbr işaretçisi o adrese 42 yazıyor.
// işlem bu kadar.
