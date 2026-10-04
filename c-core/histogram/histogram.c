#include <stdlib.h>
#include <unistd.h>

void	histogram(int n)
{
	while (n > 0)
	{
		write(1, "#", 1);
		n--;
	}
}

// Each argument is one value. Print its bar: that many '#', then a newline.
// A value that is zero or negative gives an empty line, newline included.
int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (argc > 1)
		{
			histogram(atoi(argv[i]));
			write(1, "\n", 1);
			argc--;
			i++;
		}
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
