#include <stdlib.h>
#include <stddef.h>

char *strdup(const char *src)
{
	char *copy;
	int len;
	int i;

	len = 0;
	while (src[len])
		len++;
	if (len == 0)
	{
		copy = malloc(1);
		if (copy == NULL)
			return (NULL);
		copy[0] = '\0';
		return (copy);
	}
	copy = malloc(sizeof(char) * (len + 1));
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
