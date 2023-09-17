#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (32 <= str[i] && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[str[i] / 16], 1);
			write(1, &"0123456789abcdef"[str[i] % 16], 1);
		}
	}
}

int main(void)
{
	char str[] = "Mr. \norkum Was Here Xd";
	ft_putstr_non_printable(str);
}
