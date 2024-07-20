#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *dup;
	size_t len = ft_strlen(s1);
	size_t i = 0;
	dup = malloc(len + 1);
	if (!dup)
	{
		return (NULL);
	}
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}