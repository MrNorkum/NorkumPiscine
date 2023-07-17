/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:47:45 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 07:21:04 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && n--)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

#include <stdio.h>
int main(void)
{
	char str[] = "Mr. Norkum wAS Here Xd"
	char str2[] = "Mr. Norkum WAS Here Xd";
	printf("%d", ft_strncmp(str, str2, 10));
}
