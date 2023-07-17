/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:36:19 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 06:26:57 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z')
			|| (*str >= 'a' && *str <= 'z'))
			str++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char str[] = "MrNorkumWasHereXd";
	printf("%d", ft_str_is_alpha(str));
}
