#include <stdlib.h>
#include <stddef.h>

int	gm_strlen(const char *str)
{
	int	len = 0;
	while (str[len])
		len++;
	return (len);
}

char *gm_strdup(const char *src)
{
	char *copy;
	int		 i;

	copy = malloc(sizeof(char) * (gm_strlen(src) + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
