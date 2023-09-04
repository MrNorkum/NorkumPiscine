void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

#include <stdio.h>
int main(void)
{
	int x = 13;
	int y = 42;
	ft_swap(&x, &y);
	printf("New X:%d\nNew Y:%d", x, y);
}

//Burada ise oluşturduğumuz iki değerin yerlerini değiştiriyoruz.
//Birazıcık matematik ile yapılan işlemi anlayabilirsiniz.d
//Kolay gelsin sözelciler efdklnfgdnfdfd
