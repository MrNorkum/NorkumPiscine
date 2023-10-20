#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	my_putchar('a');
	my_putchar(97);
}

//İkiside aynı çıktıyı verecektir.
//Çünkü write fonksiyonu ascii'ye göre çalışır.
//'a' karakterinin ascii tablosundaki desimal karşılığı 97'dir.
//Maini yazarken ikisinden birini örnek olarak kullanabilirsiniz.
