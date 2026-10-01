#include <unistd.h>

int	gm_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void last_replace(char *str, char *sc, char *rc)
{
	int i;
	int replace;

	i = gm_strlen(str);
	replace = -1;
	while (i > 0)
	{
		if (str[i] == sc[0])
		{
			replace = i;
			break ;
		}
		i--;
	}
	i = 0;
	while (str[i])
	{
		if (i == replace)
			write(1, &rc[0], 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (gm_strlen(argv[2]) == 1 && gm_strlen(argv[3]) == 1)
			last_replace(argv[1], argv[2], argv[3]);
		write(1, "\n", 1);
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
