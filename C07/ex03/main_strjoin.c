char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *s;
    int        arg;
    int        index;
    int        i;

    i = 0;
    arg = -1;
    s = malloc(8000);
    while (++arg < size)
    {
        index = 0;
        while (strs[arg][index])
            s[i++] = strs[arg][index++];
        index = 0;
        while (sep[index] && arg < size - 1)
            s[i++] = sep[index++];
    }
    s[i] = '\0';
    return (s);
}

int    main(void)
{
    char    **strs = malloc(sizeof(char *) * 10);
    strs[0] = "Mr";
    strs[1] = "Norkum";
    char    sep[] = " ";
    char    *res = ft_strjoin(2, strs, sep);
    printf("%s\n", res);
}
