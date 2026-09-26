#include <unistd.h>

void find_n(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == 'n')
		{
			write(1, "n", 1);
			break ;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		find_n(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
