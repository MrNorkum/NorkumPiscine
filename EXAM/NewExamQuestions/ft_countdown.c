#include <unistd.h>

int	main()
{
	int i = 57;
	while(i >= 48)
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
}

