#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putout(int n, int *arr, int pos)
{
	int	i;

	if (pos == 1)
		write(1, ", ", 2);
	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + 48);
}

void	ft_print_comb_increment(int n, int *arr)
{
	int	i;
	int	max;

	max = 9;
	i = n - 1;
	while (arr[i--] == max--)
		;
	arr[i--] += 1;
	while (i++ < n)
		arr[i + 1] = arr[i] + 1;
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = -1;
	while (++i < n)
		arr[i] = i;
	ft_putout(n, arr, 0);
	while (arr[0] != 10 - n || arr[n - 1] != 9)
	{
		if (arr[n - 1] != 9)
			arr[n - 1] += 1;
		else
			ft_print_comb_increment(n, arr);
		ft_putout(n, arr, 1);
	}
}

int main(void)
{
	ft_print_combn(3);
}
