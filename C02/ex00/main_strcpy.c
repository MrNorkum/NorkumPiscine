char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = -1;
    while (src[++i])
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

#include <stdio.h>
int main(void)
{
	char d[] = "1234567890";
	char s[] = "ABCDEFGH";
	printf("%s", ft_strcpy(d, s));
}
