int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (32 <= *str && *str <= 126)
			str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char str[] = "Mr. Norkum Was Here Xd";
	printf("%d", ft_str_is_printable(str));
}
