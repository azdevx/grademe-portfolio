#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

void	*gm_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	res;
	size_t	i;

	if (nmemb > SIZE_MAX / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	res = nmemb * size;
	i = 0;
	while (i <= res)
	{
		((unsigned char *)p)[i] = 0;
		i++;
	}
	return (p);
}
