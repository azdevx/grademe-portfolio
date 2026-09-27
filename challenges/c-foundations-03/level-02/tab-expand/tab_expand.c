#include <unistd.h>

void	tab_expand(char *str)
{
	int i;
	int col;
	int space;

	i = 0;
	col = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			space = 8 - col % 8;
			while (space > 0)
			{
				write(1, " ", 1);
				space--;
				col++;
			}
		}
		else
		{
			write(1, &str[i], 1);
			col++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		tab_expand(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
