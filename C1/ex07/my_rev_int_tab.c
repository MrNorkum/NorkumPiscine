void	my_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	my_rev_int_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < size / 2)
		my_swap(&tab[i], &tab[size - 1 - i]);
}

#include <stdio.h>
int main(void)
{
	int arr[7] = {2, 4, 1, 5, 6, 7, 3};
	my_rev_int_tab(arr, 7);
	int i = 0;
	while (i < 7)
		printf("%d", arr[i++]);
}
