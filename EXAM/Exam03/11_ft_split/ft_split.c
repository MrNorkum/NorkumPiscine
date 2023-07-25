#include <stdlib.h>
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i = -1;
	if (dstsize != 0)
	{
		while (src[++i] && i < dstsize - 1)
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

char	*ft_strdup(const char *s1)
{
	size_t		len = ft_strlen(s1) + 1;
	char		*dup = malloc(sizeof(char) * len);
	if (!dup)
		return (0);
	return (ft_strlcpy(dup, s1, len), (char *)dup);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i = len;
	char	*substr;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		i = ft_strlen(s + start);
	substr = (char *)malloc(sizeof(char) * (i + 1));
	if (!substr)
		return (NULL);
	return (ft_strlcpy(substr, s + start, i + 1), substr);
}


static int	ft_wc(char const *s, char c)
{
	size_t	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (i);
}

static int	ft_wlen(char const *s, char c)
{
	int	len = 0;
	if (!*s)
		return (0);
	while (*s && *s++ != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		a = -1;
	int		i = 0;
	char	**res = (char **)malloc(sizeof(char *) * (ft_wc(s, c) + 1));
	if (!s || !res)
		return (NULL);
	while (++a < ft_wc(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		res[a] = ft_substr(s, i, ft_wlen(&s[i], c));
		if (!res[a])
		{
			while (a >= 0)
				free(res[a--]);
			return (free(res), NULL);
		}
		i += ft_wlen(&s[i], c);
	}
	return (res[a] = NULL, res);
}
