#include "get_next_line.h"

size_t ft_strlen(char *str)
{
	size_t i;
	i = 0;
	while(str[i])
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	char	*dest;
	int		lentsrc;
	int		i;

	lentsrc = ft_strlen(src) + 1;
	dest = (char *)malloc(lentsrc);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
