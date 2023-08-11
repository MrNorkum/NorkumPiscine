int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z')
			|| (*str >= 'a' && *str <= 'z'))
			str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char str[] = "MrNorkumWasHereXd";
	printf("%d", ft_str_is_alpha(str));
}
