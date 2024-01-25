#include <unistd.h>

int	main(int ac, char **av) // ac = argüman sayısı yani terminalde ./a.out "string1" "string2" şeklinde girebildiğimiz
// durumlarda bize toplam argüman sayısını veren parametredir. 1 den başlar saymaya dizi indexlemesi ile alakası yoktur.
//yani bu durumda ac = 3 ./a.out 1. argüman "string1" 2. argüman "string3" 3.argüman
// av 2 boyutlu bir dizidir aslında senin bu terminale yazdığın değerleri şöyle alır char **av = {"./a.out","string1","string2"}
// sen burda string1 üzerinde gezmek istiyorsun 1. boyutta hangi kelimeye gideceğini söylüyorsun programa yani av[0] dediğinde ./a.out kelimesinin tamamını alıyorsun
// av[1] dediğinde "string1" kelimesinin tamamını almış oluyorsun fakat av[1][0] dediğimde sen "string1" dizisinin ilk elemanı yani "s" yi işaret etmiş oluyorsun yani programa
// orda olduğunu gösteriyorsun.
{
	int i = 0;
	if (ac == 2) // burda sadece argüman sayısının iki olduğu durumlarda yani ./a.out "string1" eğer parametre sayısı 1 değilse kısmında böyle bir yazım istiyor
	{
		while(av[1][i]) // "string1" kısmının içinde gezmeye başlıyoruz
		{
			write(1, &av[1][i], 1); // burada "string1" kelimesinin her elemanını yazdırıyoruz
			i++;
		}
	}
	write(1, "\n", 1); // burada her türlü newline atıyor eğer ac 2 den fazlaysa yani 1 parametre girilmediği durumlarda yani her koşulu sağlıyor
}
