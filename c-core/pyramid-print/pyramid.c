#include <stdlib.h>
#include <unistd.h>

void	pyramid(int n)
{
	int		i;
	int		spaces;
	int		hash;
	int		row;

	i = 1;
	row = n;
	while (row > 0)
	{
		spaces = n - i;
		while (spaces > 0)
		{
			write(1, " ", 1);
			spaces--;
		}
		hash = 2 * i - 1;
		while (hash > 0)
		{
			write(1, "#", 1);
			hash--;
		}
		write(1, "\n", 1);
		i++;
		row--;
	}
}

// argv[1] is the height. Print a centered pyramid of '#', one row per line.
// A wrong argument count prints "wrong number of arguments" and a newline.
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		pyramid(atoi(argv[1]));
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
