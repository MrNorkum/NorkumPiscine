#include <stdlib.h>
char	*ft_itoa(int n)
{
	long	nbr = n;
	int		len = 0;
	char	*ptr;
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		nbr *= -1;
		len++;
	}
	for (; n != 0; len++)
		n /= 10;
	ptr = malloc(len + 1);
	ptr[len] = '\0';
	for (; nbr > 0; nbr /= 10)
		ptr[--len] = nbr % 10 + '0';
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
