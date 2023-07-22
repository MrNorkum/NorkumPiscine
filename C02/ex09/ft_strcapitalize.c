/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:08:06 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 06:43:45 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	i = -1;
	control = 1;
	ft_strlowcase(str);
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (control == 1)
				str[i] -= 32;
			control = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			control = 0;
		else
			control = 1;
	}
	return (str);
}
