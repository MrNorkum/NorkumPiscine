int	my_str_is_lowercase(char *str)
{
	while (*str)
		if (!('a' <= *str && *str++ <= 'z'))
			return (0);
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "mrnorkumwasherexd";

	printf("%d\n", my_str_is_lowercase(str));
}
