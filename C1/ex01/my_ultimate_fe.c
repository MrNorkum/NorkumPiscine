void	my_ultimate_fe(int *********nbr)
{
	*********nbr = 48;
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
	my_ultimate_fe(&p8);
	printf("%d", x);
}

//Burada ise yaptığımız işlem çok basit.
//Yine bir x değişkeni oluşturuyoruz.
//Ve tabiki ram'de rastgele bir adreste oluşuyor.
//Ardından x değişkenine 13 değerini veriyoruz ve böylece artık adresinde 13 yazıyor.
//Burada x değişkeninin adresini p1 işaretçisine gönderiyoruz.
//Ardından p1 işaretçisinin işaret ettiği yeri de p2 işaretçisine gönderiyoruz.
//p2'nin işaret ettiği yeri p3, p3'ün işaret ettiği yeri p4'e derken en son p7'nin işaret ettiği yeri de p8'e gönderiyoruz.
//Böylece bütğn işaretçiler x değişkeninin adresini işaret ediyor.
//Biz ise p8'in işaret ettiği yeri my_ultimate_fe fonksiyonuna gönderiyoruz ve nbr işaretçisi o adrese 48 yazıyor.
//işlem bu kadar.
