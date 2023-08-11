#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	x;

	x = 123;
	while (--x >= 97)
		write(1, &x, 1);
}

int main(void)
{
	ft_print_reverse_alphabet();
}

//Bu defa alfabeyi tersten yazdıracağız.
//burada gerçekleşen olay şudur.
//X while koşuluna girmeden önce azalıyor 122 oluyor ve sonra 122 büyük eşit midir 97 sorusunu cevaplıyor.
//Cevap true ise içeri giriyor ve 122'nin ascii karşılığını ekrana yazdırıyor.
//İşlem böyle devam eder.
//En son ise b karakterini yani 98'i yazdırdıktan sonra koşula tekrar girer.
//Kendini azalttıktan sonra kontrol eder 97 büyük eşit midir 97.
//Koşulun cevabı true olduğu için içeriye girer ve 97'yi yazdırır.
//Koşula tekrar girer kendini bir azaltır ve soruyu sorar 96 büyük eşit midir 97?
//Koşulun cevabı false olduğu için 96 yazdırılmaz ve işlem böylece son bulur.
