int	my_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (my_fibonacci(index - 1) + my_fibonacci(index - 2));
}

int	my_fibonacci(int index)
{
	if (index <= 1)
		return (index * (index >= 0) - (index < 0));
	return (my_fibonacci(index - 1) + my_fibonacci(index - 2));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", my_fibonacci(7));
}

// Hangisi kolayınıza geliyorsa onu kullanın.d
