#include <unistd.h>

int		is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

void	lead_token(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && is_space(str[i]) == 1)
		i++;
	while (str[i] != '\0' && is_space(str[i]) == 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		lead_token(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return (0);
}
