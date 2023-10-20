int	my_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "MrNorkumWasHereXd";

	printf("%d\n", my_str_is_alpha(str));
}
