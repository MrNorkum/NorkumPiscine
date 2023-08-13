int	my_atoi(char *str, int sign, int res)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - 48;
	return (res * sign);
}

int	ft_atoi(char *str)
{
	return (my_atoi(str, 1, 0));
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_atoi("	 --+-+-1342a456789"));
}
