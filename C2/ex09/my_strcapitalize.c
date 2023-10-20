char	*my_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] += ('A' <= str[i] && str[i] <= 'Z') * 32;
	return (str);
}

char	*my_strcapitalize(char *str)
{
	int	i;
	int	control;

	i = -1;
	control = 1;
	my_strlowcase(str);
	while (str[++i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= control * 32;
			control = 0;
		}
		else
			control = !('0' <= str[i] && str[i] <= '9');
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "mR. nORkum wAS HeRe 13XD";

	printf("%s\n", my_strcapitalize(str));
}
