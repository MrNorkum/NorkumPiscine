void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>
int main(void)
{
	int x = 13;
	printf("%d\n", x);
	ft_ft(&x);
	printf("%d\n", x);
}

//Burada bir integer x değeri oluşturduk.
//Oluşan x değerimiz ram'de rastgele bir adreste oluşuyor.
//Biz ise bu x değerine 13 verdik yani x'in ram'deki adresine 13 yazdık.
//Ardından ft_ft fonksiyonuna *nbr işaretçisine &(ampersan) ile x değişkeninin adresini gönderdik.
//Böylece artık *nbr işaretçisi x değişkeninin ram'deki adresini işaret ediyor.
//ft_ft fonksiyonunun içinde ise biz bu *nbr işaretçisinin işaret ettiği yere 42 yazıyoruz.
//Tabiki adres olarak x'in adresini gönderdiğimiz için *nbr işaretçisinin işaret ettiği yer x değişkeninin adresi oluyor.
//Ve ardından o adrese 42 yazıyoruz.
//O adreste 13 yazyordu ancak biz o adrese 42 yazdık.
//Böylece x değişkenini yazdırdığımız zaman artık bize 42 çıktısı veriyor.
//Çünkü adresinde artık 13 değil 42 yazıyor.
