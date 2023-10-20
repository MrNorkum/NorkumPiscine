int	my_str_is_uppercase(char *str)
{
	while (*str)
		if (!('A' <= *str && *str++ <= 'Z'))
			return (0);
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "MRNORKUMWASHEREXD";

	printf("%d\n", my_str_is_uppercase(str));
}
