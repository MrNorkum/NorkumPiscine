int	ft_str_is_lowercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char str[] = "mrnorkumwasherexd";
	printf("%d", ft_str_is_lowercase(str));
}
