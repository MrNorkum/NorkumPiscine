char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = -1;
    while (src[++i])
        dest[i] = src[i];
    return (dest[i] = '\0', dest);
}
