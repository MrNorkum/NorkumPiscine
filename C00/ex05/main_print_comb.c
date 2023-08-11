#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != 55)
					write(1, ", ", 2);
				C++;
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb();
}

//Burada hem kendi içinde hemde her üçlü arasında artan şekilde ilerleyen bir örüntü kurmamız gerekiyor
//Örneğin 023 035 ya da 478 gibi şeyler kendi içinde artan koşulu sağlarken 120 436 ya da 599 bu koşulu sağlamaz.
//Çünkü soldaki sayı ne olursa olsun sağındaki en az bir fazlası olmalıdır.
//aralarında artana ise 018 019 023 gibi bir örnek ya da 078 089 123 gibi bir örnek verilebilir.
//049 ardından 050 gelemez çünkü 050 kendi içinde artan değildir 056 gelmesi gerekir.
//Bizde burada bunu yapıyoruz ve üç basamağımız olsduğu için en son yazdıracağımız şey 789 oluyor.
//if koşılında ise a = 55 yani '7' olmadığı süre boyunca , atması gerektiğini belirtiyoruz.
