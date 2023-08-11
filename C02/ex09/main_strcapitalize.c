char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	i = -1;
	control = 1;
	ft_strlowcase(str);
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (control == 1)
				str[i] -= 32;
			control = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			control = 0;
		else
			control = 1;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	char str[] = "mR. nORkum wAS HeRe 13XD";
	printf("%s", ft_strcapitalize(str));
}
