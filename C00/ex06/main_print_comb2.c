#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
}

//Burada ise ilk kısma benzer bir işlem yapıyoruz
//Lakin kendi içinde artan kısmını çiftler arasına taşıyoruz.
//Örneğin 54-56 gibi yazılabilirken 74-65 yazılmıyor.
//Çiftler arasında en az bir fazlalık olması gerekiyor.
//93-94 44-99 ya da 72-73 bu koşulu sağlıyorken 65-64 74-20 gibi şeyler sağlamıyor.
//Burada a sayısı örnek veriyorum 45 b sayısı ise 62 olsun
//İşlem şöyle gerçekleşiyor: 45 sayısının 10'a bölümü 4.5 yapıyor ama sayımız integer olduğu için 4 oluyor.
//Üzerine 48 eklenerek 52 oluyor ve böylece write ile 52'nin ascii karşılığı olan 4 karakteri yazdırılıyor.
//Ardından aynı şekilde 45 sayısı hemen aşağıda olan a % 10 işlemine giriyor ve böylece 5 oluyor.
//Çünkü 45'in 10 ile bölümünden kalan 5 ve üzerine 48 eklenerek aynı şekilde 5 karakteri yazdırılıyor.
//Böylece ilk başta 4 ve ardından 5 yazdırılarak 45 çıktısı elde edilmiş oluyor.
//ardından boşluk bırakılarak aynı işlem b sayısı içinde yapılıyor.
//işlem böyle devam ederek en son 98 99 yazdırılıp bitiriliyor.
