#include <unistd.h>

void putstr(char *s)
{
	int i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (argc > 1)
		{
			putstr(argv[argc - 1]);
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
