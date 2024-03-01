
#include "get_next_line.h"

char	*ft_strjoin(char *store, char *bufr)
{
	int		sa;
	int		sb;
	int		len;
	char	*p;

	sa = 0;
	sb = 0;
	if (!store)
		return (bufr);
	if (!bufr)
		return (store);
	len = ft_strlen(store) + ft_strlen(bufr);
	p = (char *)malloc(len * sizeof(char) + 1);
	if (!p)
		return (0);
	while (store[sa])
		p[sb++] = store[sa++];
	sa = 0;
	while (bufr[sa])
		p[sb++] = bufr[sa++];
	p[sb] = '\0';
	free (store);
	return (p);
}

int	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_find_n(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*store_remaining(char *str)
{
	int		len;
	int		i;
	char	*stor_rem;

	i = 0;
	len = ft_strlen(str);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	stor_rem = malloc(sizeof(char) * (len - i));
	if (!stor_rem)
		return (NULL);
	len = 0;
	i++;
	while (str[i])
		stor_rem[len++] = str[i++];
	stor_rem[len] = '\0';
	free(str);
	return (stor_rem);
}

char	*first_line(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if (src[0] == '\0')
		return (NULL);
	while (src[i] != '\n' && src[i])
		i++;
	dest = (char *)malloc((sizeof(char) * i) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		if (src[i] == '\n')
		{
			dest[i] = src[i];
			dest[i + 1] = '\0';
			return (dest);
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
