// senden ilk harfleri büyük yapmanı istiyor sadece
// finalde çıkmıştı.
#include <unistd.h>

char    *title(char *s)
{
    int i = 0;
    while(s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i]+= 32;
        if (s[i] >= 'a' && s[i] <= 'z' && s[i - 1] <= 32)
            s[i]-= 32;
        i++;
    }
    return (s);
}
void    ft_putstr(char *s)
{
    int i = 0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    int i = 1;
    if (ac > 1)
    {
        while(av[i])
        {
            av[i] = title(av[i]);
            ft_putstr(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}
