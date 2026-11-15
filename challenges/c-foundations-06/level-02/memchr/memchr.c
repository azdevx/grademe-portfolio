#include <stddef.h>

void	*gm_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ss = (const unsigned char *)s;

	size_t	i = 0;
	while (i < n)
	{
		if (ss[i] == (unsigned char)c)
			return ((unsigned char *)&ss[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%s\n", (char *)gm_memchr("docker", 'o', 6));
// }