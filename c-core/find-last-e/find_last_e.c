#include <unistd.h>

void  find_last_e(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		i--;
		if (str[i] == 'e')
		{
			write(1, "e", 1);
			break ;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		find_last_e(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "e\n", 2);
	return (0);
}
