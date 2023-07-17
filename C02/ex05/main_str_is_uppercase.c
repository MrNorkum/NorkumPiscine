/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:53:43 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 07:10:12 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (*str >= 'A' && *str <= 'A')
			str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char str[] = "MRNORKUMWASHEREXD";
	printf("%d", ft_str_is_uppercase(str));
}
