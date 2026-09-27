#include <stdlib.h>
#include <unistd.h>

void	row(int x, char border, char center)
{
	while (x > 0)
	{
		write(1, &border, 1);
		x--;
		while (x > 1)
		{
			write(1, &center, 1);
			x--;
		}
		if (x == 0)
		{
			write(1, "\n", 1);
		}
	}
}

void	box(char *width, char *height)
{
	int w;
	int h;

	w = atoi(width);
	h = atoi(height);
	while (h > 0)
	{
		row(w, '+', '-');
		h--;
		while (h > 1)
		{
			row(w, '|', ' ');
			h--;
		}
	}
	
}

// argv[1] is the width, argv[2] the height. Draw the frame of that rectangle:
// '+' corners, '-' on top and bottom, '|' on the sides, spaces inside.
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		box(argv[1], argv[2]);
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
