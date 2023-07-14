/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:52:22 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/12 07:28:12 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	t;

	s = 0;
	t = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[s] != '\0')
	{
		while (to_find[t] == str[s + t] && str[s + t])
			t++;
		if (to_find[t] == '\0')
			return (str + s);
		s++;
		t = 0;
	}
	return (0);
}
