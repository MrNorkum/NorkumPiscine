/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   my_strstr.c                                                              */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/22 08:54:27 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/22 08:54:30 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

char	*my_strstr(char *str, char *to_find)
{
	int	t;

	if (!to_find[0])
		return (str);
	while (*str)
	{
		t = 0;
		while (to_find[t] == *(str + t) && *(str + t))
			t++;
		if (!to_find[t])
			return (str);
		str++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char str[] = "Nobody and Norkum Was Here Xd";
	char to_find[] = "Norkum";
	printf("%s\n", my_strstr(str, to_find));
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
