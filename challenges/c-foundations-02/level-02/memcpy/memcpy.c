#include <stddef.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t	i;
	
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}

	return (dst);
}
