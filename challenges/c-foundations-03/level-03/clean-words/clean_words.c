#include <unistd.h>

int		is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

void	clean_words(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		while (is_space(str[i]) && str[i])
			i++;
		while (!is_space(str[i]) && str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		while (is_space(str[i]) && str[i])
		{
			i++;
			if (!is_space(str[i]) && str[i])
				write(1, " ", 1);
		}	
		
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		clean_words(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
