/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 06:20:23 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 08:41:14 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	c = 0;
	i = -1;
	s = malloc(sizeof(strs));
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			s[c++] = sep[j++];
	}
	s[c] = '\0';
	return (s);
}

int	main(void)
{
	char	**strs;
	char	*sep;
	char	*result;

	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 2 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 6 + 1);
	strs[0] = "Mr";
	strs[1] = "Norkum";
	sep = " ";
	result = ft_strjoin(2, strs, sep);
	printf("%s\n", result);
}
