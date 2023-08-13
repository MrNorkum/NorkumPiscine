int my_atoi(const char *str, int sign, int res, int mod)
{
    if (((9 <= *str && *str <= 13) || *str == 32) && res == 0 && mod == 1)
        return (my_atoi(str + 1, sign, res, mod));
    if (*str == '-' && res == 0 && mod == 1)
        return (my_atoi(str + 1, sign * -1, res, mod));
    if (*str == '+' && res == 0 && mod == 1)
        return (my_atoi(str + 1, sign, res, mod));
    if ('0' <= *str && *str <= '9')
        return (my_atoi(str + 1, sign, res * 10 + *str - 48, 0));
    return (res * sign);
}

int ft_atoi(const char *str)
{
    return (my_atoi(str, 1, 0, 1));
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_atoi("	 --+-+-1342a456789"));
}
