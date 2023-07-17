/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:12:49 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 07:08:34 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmpdst;

	tmpdst = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (tmpdst);
}

#include <stdio.h>
int main(void)
{
	char d[] = "1234567890";
	char s[] = "ABCDEFGH";
	printf("%s", ft_strcpy(d, s));
}
