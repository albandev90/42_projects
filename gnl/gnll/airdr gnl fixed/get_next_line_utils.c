
#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		len;
	char	*p;

	i = 0;
	j = 0;
	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	len = (ft_strlen(s1) + ft_strlen(s2));
	p = (char *)malloc(len * sizeof(char) + 1);
	if (!p)
		return (0);
	while (s1[i])
		p[j++] = s1[i++];
	i = 0;
	while (s2[i])
		p[j++] = s2[i++];
	p[j] = '\0';
	free (s1);
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
	stor_rem = malloc(len - i);
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
	while (src[i] != '\n' && src[i] != '\0')
		i++;
	dest = malloc(i + 2);
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
