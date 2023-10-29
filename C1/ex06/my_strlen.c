int	my_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + my_strlen(str + 1));
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", my_strlen("Mr. Norkum Was Here Xd"));
}
