int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

int	ft_fibonacci(int index)
{
	if (index <= 1)
		return (index * (index >= 0) - (index < 0));
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

//Hangisi kolayınıza geliyorsa onu kullanın.d
