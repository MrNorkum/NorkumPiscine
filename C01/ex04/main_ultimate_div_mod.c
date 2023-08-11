void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

#include <stdio.h>
int main(void)
{
	int a = 10;
	int b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d%d SJ", a, b);
}

//Burada ise bir a ve b değişkeni oluşturduk.
//Adreslerine ise 10 ve 3 değerlerini yazdık.
//Ardından a ve b değişkenlerinin adreslerini ultimate_div_mod fonksiyonuna gönderdik.
//Burada fonksiyon bölme işleminin sonucunu a değişkenine kaydetti ve mod alma işleminin değerini ise b'ye.
//Böylece a ve b değişkenlerinin adreslerindeki değerler değişmiş oldu.
