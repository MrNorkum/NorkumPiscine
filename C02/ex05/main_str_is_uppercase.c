int	ft_str_is_uppercase(char *str)
{
	while (*str)
		if (!('A' <= *str && *str++ <= 'Z'))
			return (0);
	return (1);
}

#include <stdio.h>
int main(void)
{
	char str[] = "MRNORKUMWASHEREXD";
	printf("%d", ft_str_is_uppercase(str));
}
