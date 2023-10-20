char	*my_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] += ('A' <= str[i] && str[i] <= 'Z') * 32;
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Mr. Norkum Was Here Xd";

	printf("%s\n", my_strlowcase(str));
}
