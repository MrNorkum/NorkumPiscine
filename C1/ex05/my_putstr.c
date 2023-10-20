#include <unistd.h>

void	my_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	my_putstr(char *str)
{
	while (*str && write(1, str++, 1))
		;
}

int main(void)
{
	my_putstr("Mr. Norkum Was Here Xd");
}

//Hangisi kolayınıza geliyorsa onu kullanın.d
