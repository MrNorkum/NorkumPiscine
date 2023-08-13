#include <stdlib.h>

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *s;
    int     a;
    int     i;
    int     j;

    j = 0;
    a = -1;
    s = malloc(800);
    while (++a < size)
    {
        i = 0;
        while (strs[a][i])
            s[j++] = strs[a][i++];
        i = 0;
        while (sep[i] && a < size - 1)
            s[j++] = sep[i++];
    }
    return (s[j] = '\0', s);
}
