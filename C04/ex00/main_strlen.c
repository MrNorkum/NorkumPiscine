int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_strlen("Mr. Norkum"));
}
