#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

void	*gm_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
