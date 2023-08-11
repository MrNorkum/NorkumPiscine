int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1++ == *s2++)
		;
	return (*--s1 - *--s2);
}

#include <stdio.h>
int main(void)
{
	char str1[] = "Mr. Norkum wAS Here Xd";
	char str2[] = "Mr. Norkum WAS Here Xd";
	printf("%d", ft_strcmp(str1, str2));
}
