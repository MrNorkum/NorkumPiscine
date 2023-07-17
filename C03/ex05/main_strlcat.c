/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 07:30:32 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 07:36:55 by hkeles           ###   ########.tr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dst_len;
	unsigned int	i;

	i = -1;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);
	if (dst_len >= size)
		return (size + src_len);
	while (src[++i] && i + dst_len < size -1)
		dest[dst_len + i] = src[i];
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}

#include <stdio.h>
int main(void)
{
	char dest[27] = "Mr. Norkum ";
	char src[] = "WAS Here Xd";
	printf("%d", ft_strlcat(dest, src, 9));
}
