int	ft_str_is_alpha(char *str)
{
	while (*str)
		if (!(('A' <= *str && *str <= 'Z')
			|| ('a' <= *str && *str <= 'z')))
			return (0);
	return (1);
}

#include <stdio.h>
int main(void)
{
	char str[] = "MrNorkumWasHereXd";
	printf("%d", ft_str_is_alpha(str));
}
