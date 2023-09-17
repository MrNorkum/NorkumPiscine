int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main(void)
{
	char str1[] = "Mr. Norkum wAS Here Xd";
	char str2[] = "Mr. Norkum WAS Here Xd";
	printf("%d", ft_strcmp(str1, str2));
}
