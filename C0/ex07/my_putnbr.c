#include <unistd.h>

void	my_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		my_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void	my_putnbr(int nb)
{
    long    n;

    n = nb;
    write(1, "-", (n < 0));
    n *= !(n < 0) - (n < 0);
    if (n > 9)
       my_putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(void)
{
	my_putnbr(-42);
}

//Hangisi kolayınıza geliyorsa onu kullanın.d

//Burada ise integer aralığında verilen her sayıyı yazdırmamız gerekiyor.
//Biz ise burada fonksiyona gönderdiğimiz sayıyı daha geniş bir aralık olan long aralığına gönderiyoruz.
//Böylece integer aralığını aşma vs gibi durumlar olmadan işlemlerimizi rahatça yapabiliyoruz.
//Fonksiyonda sayımız negatif ise write ile '-' yazdırıyoruz ve sayıyı pozitife çevirip işleme alıyoruz.
//Sayımız iki basamaklı olduğu sürece bir basamak azaltarak fonksiyona tekrar gönderiyoruz.
//Ardından sayımız tek basamaklı olduğu anda basamakların hepsini teker teker yazdırıyoruz.
