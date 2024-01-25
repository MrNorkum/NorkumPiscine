#include <unistd.h>

int	main()
{
	int i = 97;
	while(i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
