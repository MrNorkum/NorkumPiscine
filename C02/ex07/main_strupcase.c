char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] -= ('a' <= str[i] && str[i] <= 'z') * 32;
	return (str);
}

#include <stdio.h>
int main(void)
{
	char str[] = "Mr. Norkum Was Here Xd";
	printf("%s", ft_strupcase(str));
}
