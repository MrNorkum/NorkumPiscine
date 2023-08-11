int	ft_str_is_numeric(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char str[] = "1234567890";
	printf("%d", ft_str_is_numeric(str));
}
