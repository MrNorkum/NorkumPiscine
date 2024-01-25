/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strjoin.c                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 09:13:41 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 09:13:42 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include <stdlib.h>

char	*my_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		a;
	int		i;
	int		j;

	j = 0;
	a = -1;
	s = malloc(sizeof(strs));
	while (++a < size)
	{
		i = 0;
		while (strs[a][i])
			s[j++] = strs[a][i++];
		i = 0;
		while (sep[i] && a < size - 1)
			s[j++] = sep[i++];
	}
	return (s[j] = '\0', s);
}

#include <stdio.h>

int	main(void)
{
	char	**strs;
	char	sep[] = " ";
	char	*res;

	strs = malloc(sizeof(char *) * 100);
	strs[0] = "Mr";
	strs[1] = "Norkum";
	res = my_strjoin(2, strs, sep);
	printf("%s\n", res);
}

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
