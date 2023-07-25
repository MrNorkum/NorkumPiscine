#include <unistd.h>
char *ft_rev_print(char *str)
{
	int	i = -1;
	while (str[++i]);
	while (--i >= 0)
		write(1, &str[i], 1);
	return (str);
}
