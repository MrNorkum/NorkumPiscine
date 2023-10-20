void	my_ultimate_div_mod(int *a, int *b)
{
	int	div;

	if (*b == 0)
		return ;
	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

#include <stdio.h>
int main(void)
{
	int x = 10;
	int y = 3;
	my_ultimate_div_mod(&x, &y);
	printf("%d%d SJ", x, y);
}

//Burada ise bir x ve y değişkeni oluşturduk.
//Adreslerine ise 10 ve 3 değerlerini yazdık.
//Ardından x ve y değişkenlerinin adreslerini ultimate_div_mod fonksiyonuna gönderdik.
//Burada fonksiyon bölme işleminin sonucunu x değişkenine kaydetti ve mod alma işleminin değerini ise y'ye.
//Böylece x ve y değişkenlerinin adreslerindeki değerler değişmiş oldu.
