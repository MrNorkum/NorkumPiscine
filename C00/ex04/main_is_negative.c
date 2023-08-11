#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

int main(void)
{
	ft_is_negative(-42);
	ft_is_negative(0);
	ft_is_negative(42);
}

//Burada if ve else koşullarının nasıl çalıştığını öğreniyoruz.
//Fonksiyona bakacak olursak bir integer yani tam sayı değeri ile işleme sokuluyor.
//Fonksiyonun içinde ise koşul şudur: (eğer)if n tam sayısı sıfırdan küçük ise N yazdır.
//(Diğer koşullarda)else P yazdır.
//Böylece işlem son bulur.
