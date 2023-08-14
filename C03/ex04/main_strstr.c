char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	t;

	s = -1;
	if (to_find[0] == '\0')
		return (str);
	while (str[++s])
	{
		t = 0;
		while (to_find[t] == str[s + t] && str[s + t])
			t++;
		if (to_find[t] == '\0')
			return (str + s);
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char str[] = "Nobody and Norkum Was Here Xd";
	char to_find[] = "Norkum";
	printf("%s", ft_strstr(str, to_find));
}
