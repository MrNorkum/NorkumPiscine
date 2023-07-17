/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:26:16 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 07:26:03 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	i;

	i = -1;
	d = ft_strlen(dest);
	while (src[++i])
		dest[d + i] = src[i];
	dest[d + i] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char dest[27] = "Mr. Norkum ";
	char src[] = "WAS Here Xd";
	printf("%d", ft_strcat(dest, src));
}
