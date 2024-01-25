#include <unistd.h>

int	main()
{
	write(1, "0123456789", 11); // ko atıyosa bunu 10 ile değiştir
	write(1, "\n", 1); // eger newline istiyorsa
}


// 2. yontem
int	main()
{
	int i = 48;
	while(i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
