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

#include <stdio.h>
int    main(void)
{
    char    **strs = malloc(800);
    strs[0] = "Mr";
    strs[1] = "Norkum";
    char    sep[] = " ";
    char    *res = ft_strjoin(2, strs, sep);
    printf("%s\n", res);
}
