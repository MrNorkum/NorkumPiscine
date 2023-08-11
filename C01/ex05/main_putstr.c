#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str && write(1, str++, 1))
		;
}

int main(void)
{
	ft_putstr("Mr. Norkum Was Here Xd");
}
